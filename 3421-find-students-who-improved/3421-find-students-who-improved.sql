WITH ranked AS (
    SELECT *,
           ROW_NUMBER() OVER (
               PARTITION BY student_id, subject
               ORDER BY exam_date
           ) AS first_rank,

           ROW_NUMBER() OVER (
               PARTITION BY student_id, subject
               ORDER BY exam_date DESC
           ) AS last_rank
    FROM Scores
)

SELECT
    student_id,
    subject,
    MAX(CASE
        WHEN first_rank = 1 THEN score
    END) AS first_score,

    MAX(CASE
        WHEN last_rank = 1 THEN score
    END) AS latest_score

FROM ranked

GROUP BY student_id, subject

HAVING
    MAX(CASE WHEN last_rank = 1 THEN score END)
    >
    MAX(CASE WHEN first_rank = 1 THEN score END);
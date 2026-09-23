# Write your MySQL query statement below
select stock_name, SUM(
    CASE
        WHEN operation ='Buy' then -price
        WHEN operation ='Sell' then +price
        END
        ) AS 'capital_gain_loss'
        from Stocks 
        GROUP BY stock_name;
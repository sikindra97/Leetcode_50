class Solution {
public:
    int minInsertions(string s) {
        int cnt = 0;
        int res = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                cnt++;
            } else {
                if (i + 1 < s.size() && s[i + 1] == ')') {
                    i++;  // Consume the second ')'
                } else {
                    res++; // Insert the missing ')'
                }

                if (cnt > 0) {
                    cnt--;
                } else {
                    res++; // Insert the missing '('
                }
            }
        }

        return res + 2 * cnt;
    }
};
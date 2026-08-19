class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> map;
        unordered_set<string> set(banned.begin(), banned.end());
        string res = "";

        for (int i = 0; i < paragraph.size(); i++) {
            char c = paragraph[i];
            if (isalpha(c)) {
                res += tolower(c);
            } else if (!res.empty()) {
                if (set.find(res) == set.end()) {
                    map[res]++;
                }
                res = "";
            }
        }

        // handle last word
        if (!res.empty() && set.find(res) == set.end()) {
            map[res]++;
        }

        string ans = "";
        int val = 0;
        for (auto it : map) {
            if (it.second > val) {
                ans = it.first;
                val = it.second;
            }
        }
        return ans;
    }
};

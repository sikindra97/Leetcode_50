class Solution {
public:
    unordered_map<string, char> mp = {
        {"&quot;", '"'},
        {"&apos;", '\''},
        {"&amp;", '&'},
        {"&gt;", '>'},
        {"&lt;", '<'},
        {"&frasl;", '/'}
    };

    string entityParser(string text) {

        string ans = "";

        for (int i = 0; i < text.size(); i++) {

            if (text[i] == '&') {

                string res = "";
                int j = i;

                while (j < text.size() && text[j] != ';') {
                    res += text[j];
                    j++;
                }


                if (j < text.size()) {
                    res += ';';
                }

                if (mp.count(res)) {
                    ans += mp[res];
                    i = j;          
                } else {
                    ans += text[i]; 
                }
            }
            else {
                ans += text[i];
            }
        }

        return ans;
    }
};
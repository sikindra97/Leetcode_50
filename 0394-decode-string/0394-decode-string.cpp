class Solution {
public:
    string decodeString(string s) {
        int currnum=0;
        string currs="";
        stack<pair<int,string>>st;
        for(int i=0;i<s.size();i++){
           if(isdigit(s[i])){
            currnum=currnum*10+s[i]-'0';
           }
            else if(s[i]=='['){
                st.push({currnum,currs});
                currnum=0;
                currs="";
            }
            else if(s[i]==']'){
                int val=st.top().first;
                string prevs=st.top().second;
                st.pop();
                string repeated="";
                for(int i=0;i<val;i++){
                    repeated+=currs;
                }
                currs=prevs+repeated;
                currnum=0;
            }else{
                currs+=s[i];
            }
        }
        return currs;
    }
};
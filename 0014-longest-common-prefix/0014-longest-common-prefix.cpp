class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int n=strs.size();
         sort(strs.begin(),strs.end(),[](string &a,string &b){
            return a.size()<b.size();
         });
         string first=strs[0];
        for(int i=0;i<strs[0].size();i++){
            bool is=true;
            string s=first.substr(0,i+1);
            for(int j=0;j<n;j++){
                string st=strs[j];
              string sub=st.substr(0,i+1);
              if(s!=sub){
              is=false;
              break;
              }
            
            }
            if(!is)break;
        ans=s;
        }
        if(strs.size()==1){
            return strs[0];
        }
        return ans;

    }
};
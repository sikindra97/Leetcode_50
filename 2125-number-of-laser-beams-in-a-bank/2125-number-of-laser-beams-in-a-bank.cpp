class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        int prev=0;
        int ans=0;
        for(int i=0;i<n;i++){
            string s=bank[i];
            int cnt=0;
            for(int j=0;j<s.size();j++){
                if(s[j]=='1'){
                    cnt++;
                }
            }
            if(cnt==0){
                continue;

            }else{
                if(prev!=0){
                ans+=prev*cnt;
                prev=cnt;
                }else{
                    prev=cnt;
                }
            }
        }
        return ans;
    }
};
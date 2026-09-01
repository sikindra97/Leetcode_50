class Solution {
public:
    int minimumChairs(string s) {
       int chair=0;
       int ans=0;
       for(int i=0;i<s.size();i++){
        if(s[i]=='E'){
         chair++;
        }if(s[i]=='L'){
        chair--;
        }
          ans=max(ans,chair);


       } 
       return ans;
    }
};
class Solution {
public:
//a=97,z=122
//a-z=97-122=25+1=26
//c-z=99-122=23+1=24
    int reverseDegree(string s) {
        int ans=0;
    for(int i=0;i<s.size();i++){
        int val=s[i];
        int v=abs(val-122)+1;
        int res=v*(i+1);
        ans+=res;
       
    }
    return ans;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int l=0;
        int r=0;
        int ans=0;
        if(s.size()==0){
            return 0;
        }
        unordered_set<char>maps;
        while(r<n){
        while(maps.count(s[r])){
            maps.erase(s[l]);
            l++;
         }
         maps.insert(s[r]);
         r++;
         ans=max(ans,r-l+1);
        }
        return ans-1;
    }
};
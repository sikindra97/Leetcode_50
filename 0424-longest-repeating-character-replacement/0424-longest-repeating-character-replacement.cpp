class Solution {
public:
    int characterReplacement(string s, int k) {
     int ans=0;
     int n=s.size();
    int left=0;
        unordered_map<char,int>maps;
        int max_f=0;
       
    for(int right=0;right<n;right++){
        maps[s[right]]++;
     int size=right-left+1;
        max_f=max(max_f,maps[s[right]]);
        int required_changes= size-max_f;
        if(required_changes<=k){
            ans=max(ans,size);
        }else{
            maps[s[left]]--;
            left++; 
        }
    }
        return ans;

    }
};
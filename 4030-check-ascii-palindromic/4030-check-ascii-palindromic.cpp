class Solution {
public:

    bool isPalindromic(string s) {
      string ans="";
      for(int i=0;i<s.size();i++){
        int val=(int)s[i];
        string binary_str = bitset<8>(val).to_string();  
        ans+=binary_str;
      }
      int start=0;
      int end=ans.size()-1;
      while(start<end){
        if(ans[start]!=ans[end]){
            return false;
        }
        start++;
        end--;
      }
      return true;
    }
};
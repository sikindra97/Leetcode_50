class Solution {
public:

    int possibleStringCount(string word) {
   int res=0;
   int cnt=1;
   for(int i=1;i<word.size();i++){
     if(word[i]==word[i-1]){
      cnt++;
      if(cnt>=2){
        res++;
      }
     }else{
        cnt=1;
     }
   }
   return 1+res;
    }
};
class Solution {
public:
    string modifyString(string s) {
        int n=s.size();
    for(int i=0;i<n;i++){
     if(s[i]=='?'){
        for(char ch='a';ch<='z';ch++){
            if(i-1>=0 && ch==s[i-1]){
                continue;
            }
            if(i+1<n && ch==s[i+1]){
                continue;
            }
            s[i]=ch;
            break;
        }
       
     }
    }

       
     return s;

    }
};
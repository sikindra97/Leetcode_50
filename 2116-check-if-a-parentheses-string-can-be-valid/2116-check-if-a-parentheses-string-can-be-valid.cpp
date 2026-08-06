class Solution {
public:
    bool canBeValid(string s, string locked) {
        int balanced=0;
        int n=s.size();
        //left to right
        if(n%2!=0){
            return false;
        }
        
        for(int i=0;i<n;i++){
            if(s[i]=='(' || locked[i]=='0'){
                balanced++;
            }else{
                balanced--;
            }
            if(balanced<0){
                return false;
            }
        }
        balanced=0;
        //right to left
         for(int i=n-1;i>=0;i--){
            if(s[i]==')' || locked[i]=='0'){
                balanced++;
            }else{
                balanced--;
            }
            if(balanced<0){
                return false;
            }
        }
        return true;
    }
};
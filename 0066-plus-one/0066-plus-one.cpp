class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
       int sum=digits[0]+1;
       int carry=sum/10;
       int val=sum%10;
            digits[0]=val;
        for(int i=1;i<digits.size();i++){
            if(carry==0){
                break;
            }

          int v=digits[i]+carry;
          digits[i]=v%10;
          carry=v/10;
        }
        if(carry!=0){
            digits.push_back(carry);
        }
     reverse(digits.begin(),digits.end());
     return digits;
    }
};
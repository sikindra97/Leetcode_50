class Solution {
    //97 to 122 
    public String stringHash(String s, int k) {
        String ans="";
       for(int i = 0; i < s.length(); i += k) {
        String str=s.substring(i,i+k);
        int sum=0;
        for(int j=0;j<str.length();j++){
             sum+=str.charAt(j)-'a';
        }
        int hashed=sum%26;
        ans+=(char)(hashed+'a');

         }
return ans;
    }
}
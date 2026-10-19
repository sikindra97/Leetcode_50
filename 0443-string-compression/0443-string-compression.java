class Solution {
    public int compress(char[] chars) {
       String ans="";
       int cnt=1;
       for(int i=1;i<chars.length;i++){
        if(chars[i]!=chars[i-1]){
           ans+=chars[i-1];
           if(cnt>1){
            ans+=Integer.toString(cnt);
           }
           cnt=1;
        }else{
            cnt++;
        }
       }
       if(chars.length>0){
         ans+=chars[chars.length-1];
           if(cnt>1){
            ans+=Integer.toString(cnt);
           }
       }
       for(int i=0;i<ans.length();i++){
        chars[i]=ans.charAt(i);
       }
       return ans.length();
    }
}
class Solution {
    public String reverseWords(String s) {
        Stack<String>st=new Stack<>();
        String ans="";
        String word="";
        for(int i=0;i<s.length();i++){
        if(s.charAt(i)==' '){
            if(word.length()!=0){
                st.push(word);
                word="";
            }
        }else{
            word+=s.charAt(i);
        }
        }
        if(word.length()!=0){
            st.push(word);
        }
        while(!st.isEmpty()){
          ans+=st.peek();
          st.pop();
         if(!st.isEmpty()){
         ans+=" ";
         }
        }
         return ans;


    }
}
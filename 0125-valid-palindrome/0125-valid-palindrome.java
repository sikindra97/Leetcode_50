class Solution {
    public boolean isPalindrome(String s) {
     String ans = "";
for (int i = 0; i < s.length(); i++) {
    char c = Character.toLowerCase(s.charAt(i));

   
            if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
                ans += c;
            }
}
String st = new StringBuilder(ans).reverse().toString();
return ans.equals(st);

    }
}
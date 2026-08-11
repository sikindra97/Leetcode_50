class Solution {

    String solve(String s) {

        StringBuilder currs = new StringBuilder();

        char c = s.charAt(0);
        int cnt = 1;

        for (int i = 1; i < s.length(); i++) {

            if (s.charAt(i) == c) {
                cnt++;
            }
            else {

                // Finish current group
                currs.append(cnt);
                currs.append(c);

               
                c = s.charAt(i);
                cnt = 1;
            }
        }

        
        currs.append(cnt);
        currs.append(c);

        return currs.toString();
    }

    public String countAndSay(int n) {

        String s = "1";

        for (int i = 2; i <= n; i++) {
            s = solve(s);
        }

        return s;
    }
}
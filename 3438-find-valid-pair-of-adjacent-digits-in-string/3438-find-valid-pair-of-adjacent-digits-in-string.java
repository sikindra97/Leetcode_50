import java.util.*;

class Solution {
    public String findValidPair(String s) {
        HashMap<Character, Integer> maps = new HashMap<>();

        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            maps.put(c, maps.getOrDefault(c, 0) + 1);
        }

        for (int i = 0; i < s.length() - 1; i++) {
            char a = s.charAt(i);
            char b = s.charAt(i + 1);

            if (a != b &&
                maps.get(a) == a - '0' &&
                maps.get(b) == b - '0') {
                return "" + a + b;
            }
        }

        return "";
    }
}
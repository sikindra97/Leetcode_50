class Solution {
    public boolean isIsomorphic(String s, String t) {

        HashMap<Character, Character> maps1 = new HashMap<>();
        HashMap<Character, Character> maps2 = new HashMap<>();

        for(int i = 0; i < s.length(); i++) {

            char ch1 = s.charAt(i);
            char ch2 = t.charAt(i);

            if(maps1.containsKey(ch1) && maps1.get(ch1) != ch2) {
                return false;
            }

            if(maps2.containsKey(ch2) && maps2.get(ch2) != ch1) {
                return false;
            }

            maps1.put(ch1, ch2);
            maps2.put(ch2, ch1);
        }

        return true;
    }
}
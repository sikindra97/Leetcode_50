class Solution {
    public boolean areOccurrencesEqual(String s) {
       HashMap<Character, Integer> maps = new HashMap<>();
for (int i = 0; i < s.length(); i++) {
    char c = s.charAt(i);
    maps.put(c, maps.getOrDefault(c, 0) + 1);
}
int count=maps.get(s.charAt(0));
  for(char c:maps.keySet()) {
    int cnt=maps.get(c);
    if(cnt!=count){
        return false;
    }
  }     
  return true;

        
    }
}
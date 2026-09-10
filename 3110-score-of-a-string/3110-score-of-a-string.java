class Solution {
    public int scoreOfString(String s) {
        
        List<Integer>list=new ArrayList<>();
        for(int i=0;i<s.length();i++){
            int val=s.charAt(i);
            list.add(val);
        }
        int ans=0;
        for(int i=1;i<list.size();i++){
          int val=Math.abs(list.get(i)-list.get(i-1));
          ans+=val;
        }
        return ans;
    }
}
class Solution {
    public int minOperations(List<Integer> nums, int k) {
      Set<Integer>maps=new HashSet<>();
      for(int i=1;i<=k;i++){
        maps.add(i);
      }  
      int cnt=0;
      for(int i=nums.size()-1;i>=0;i--){
      cnt++;
      if(maps.contains(nums.get(i))){
        maps.remove(nums.get(i));
      }
       if(maps.size()==0){
        break;
      }
      }
return cnt;
    }
}
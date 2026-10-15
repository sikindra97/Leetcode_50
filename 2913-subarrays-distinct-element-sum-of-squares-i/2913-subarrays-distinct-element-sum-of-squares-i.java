class Solution {
    public int sumCounts(List<Integer> nums) {
      int ans=0;
        for(int i=0;i<nums.size();i++){
              Set<Integer>maps=new HashSet<>();
            for(int j=i;j<nums.size();j++){
                maps.add(nums.get(j));
                int n=maps.size();
                ans+=n*n;
            }
        }
        return ans;

    }
}
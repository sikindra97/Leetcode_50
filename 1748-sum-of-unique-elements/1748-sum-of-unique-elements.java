class Solution {
    public int sumOfUnique(int[] nums) {
     HashMap<Integer,Integer>maps=new HashMap<>();
     for(int it:nums){
        maps.put(it,maps.getOrDefault(it,0)+1);
     }   
     int ans=0;
     for(int it:maps.keySet()){
        int cnt=maps.get(it);
        if(cnt==1){
            ans+=it;
                    }
     }
     return ans;
    }
}
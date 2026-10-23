class Solution {
    public boolean containsDuplicate(int[] nums) {
         HashMap<Integer,Integer>maps=new HashMap<>();
     for(int it:nums){
        maps.put(it,maps.getOrDefault(it,0)+1);
     }   
    
     for(int it:maps.keySet()){
        int cnt=maps.get(it);
        if(cnt>1){
            return true;
                  }          }
    return false;
    
    }
}
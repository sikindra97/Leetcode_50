class Solution {
    List<List<Integer>>ans=new ArrayList<>();
     List<Integer>list=new ArrayList<>();
   public void solve(int idx,int sum,int n,int[] candidates, int target){
         if(sum==target){
          ans.add(new ArrayList<>(list));
          return;
        }
         if(idx==n){
            return;
        }
        if(sum>target){
            return;
        }
       //take
        list.add(candidates[idx]);
        solve(idx,sum+candidates[idx],n,candidates,target);

        //not take
        list.remove(list.size()-1);
        solve(idx+1,sum,n,candidates,target);
    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        int n=candidates.length;
        solve(0,0,n,candidates,target);
        return ans;
            }
}
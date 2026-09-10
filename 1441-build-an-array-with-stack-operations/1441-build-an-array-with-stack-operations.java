class Solution {
    public List<String> buildArray(int[] target, int n) {
        List<String>ans=new ArrayList<>();
        int j=0;
        for(int i=1;i<=n;i++){
            ans.add("Push");
            if(i==target[j]){
               j++;
               if(j==target.length){
                break;
               }
            }else{
             ans.add("Pop");
            }
        }
        return ans;

    }
}
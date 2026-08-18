class Solution {
    public int longestMountain(int[] arr) {
     int pick=0;
     int ans=0;
     for(int i=1;i<arr.length-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
           //left
           int left=i;
           while(left>0 && arr[left]>arr[left-1]){
            left--;
           }
           //right
           int right=i;
           while(right<arr.length-1 && arr[right]>arr[right+1]){
            right++;
           }

         int l = right - left + 1;
           ans=Math.max(ans,l);
          } }

          return ans; 
    }
}
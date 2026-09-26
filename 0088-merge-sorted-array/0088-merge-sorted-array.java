class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
    int cnt=0;
    for(int i=0;i<nums1.length;i++){
        if(nums1[i]==0 && cnt<n){
            nums1[i]=nums2[cnt++];
        }
    } 
    Arrays.sort(nums1);

    }
}
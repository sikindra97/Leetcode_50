/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    boolean solve(int sum,TreeNode root,int targetSum){
    if(root==null){
        return false;
    }
    sum+=root.val;
     if(root.left==null && root.right==null){
        if(sum==targetSum){
            return true;
        }
    }

    if(solve(sum,root.left,targetSum)){
        return true;
    }
    if(solve(sum,root.right,targetSum)){
        return true;
    }
    sum-=root.val;

    return false;
}
    public boolean hasPathSum(TreeNode root, int targetSum) {
        return solve(0,root,targetSum);
    }
}
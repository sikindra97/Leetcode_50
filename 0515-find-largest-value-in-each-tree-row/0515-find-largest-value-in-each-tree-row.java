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
    public List<Integer> largestValues(TreeNode root) {
        
      Queue<TreeNode>q=new LinkedList<>();
      q.offer(root);   
      List<Integer>ans=new ArrayList<>();
     if(root==null){
        return ans;
     }
      while(!q.isEmpty()){
        int n=q.size();
        List<Integer>list=new ArrayList<>();
        for(int i=0;i<n;i++){
            TreeNode temp=q.peek();
            q.poll();
            list.add(temp.val);
            if(temp.left!=null){
                q.offer(temp.left);
            }
            if(temp.right!=null){
                q.offer(temp.right);
            }
        }
        Collections.sort(list, Collections.reverseOrder());
        ans.add(list.get(0));
      }  
       return ans;
    }
   
}
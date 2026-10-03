/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
//preorder=NLR && inorder=LNR
//root always 
int i=0;
TreeNode *solve(int start,int end,vector<int>& preorder, vector<int>& inorder){
  if(start>end)return NULL;
    TreeNode *root=new TreeNode(preorder[i++]);
        int pos;
  for(int i=0;i<inorder.size();i++){
    if(root->val==inorder[i]){
        pos=i;
        break;
    }
  }
  root->left=solve(start,pos-1,preorder,inorder);
   root->right=solve(pos+1,end,preorder,inorder);
   return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
  return solve(0,inorder.size()-1,preorder,inorder);
    }
};
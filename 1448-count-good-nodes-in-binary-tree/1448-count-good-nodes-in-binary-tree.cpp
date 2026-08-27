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
int ans;
void solve(TreeNode *root,int maxi){
if(!root){
    return;
}
if(root->val >= maxi){
    maxi=root->val;
    ans++;
}solve(root->right,maxi);
solve(root->left,maxi);
} int goodNodes(TreeNode* root) {
    if(!root){
        return 0;

    }
    ans=0;
     solve(root,root->val);

    return ans;
    }
};
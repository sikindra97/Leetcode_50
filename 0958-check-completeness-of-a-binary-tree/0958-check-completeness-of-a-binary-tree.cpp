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
bool solve(TreeNode *root){
    queue<TreeNode*>q;
    if(root==NULL){
        return true;
    }
    q.push(root);
    bool isfoundNull=false;
    while(!q.empty()){
        TreeNode *curr=q.front();
        q.pop();
        if(curr==NULL){
            isfoundNull=true;
            continue;
        }
        if(isfoundNull)return false;

       q.push(curr->left);
       q.push(curr->right);
    }

    return true;
}
    bool isCompleteTree(TreeNode* root) {
     return solve(root);   
    }
};
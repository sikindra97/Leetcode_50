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
vector<vector<int>>ans;
int cnt=0;
void solve(TreeNode *root){
     if(!root){
        return;
     }
     queue<TreeNode*>q;
     q.push(root);

     while(!q.empty()){
        int n=q.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            TreeNode* temp=q.front();
            q.pop();
            v.push_back(temp->val);
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }     
        }
                    if(cnt%2!=0){
                 reverse(v.begin(),v.end());
             ans.push_back(v);
            }else{
                ans.push_back(v);
            }
            cnt++;
     }
}
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        solve(root);
        return ans;

    }
};
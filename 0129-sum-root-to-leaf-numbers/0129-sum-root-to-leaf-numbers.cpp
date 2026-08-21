class Solution {
public:
int ans=0;

void solve(TreeNode *root, string s){
    if(root==NULL){
        return;
    }
    s+=to_string(root->val);
if(root->left==NULL &&  root->right==NULL){
    ans+=stoi(s);
    return;
}
solve(root->left,s);
solve(root->right,s);
s.pop_back();

}
    int sumNumbers(TreeNode* root) {
        string s="";
        solve(root,s);
        return ans;
    }
};
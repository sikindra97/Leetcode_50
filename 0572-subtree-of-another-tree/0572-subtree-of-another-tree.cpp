class Solution {
public:

    bool same(TreeNode* root, TreeNode* subroot) {
        if(root == NULL && subroot == NULL) {
            return true;
        }

        if(root == NULL || subroot == NULL) {
            return false;
        }

        if(root->val != subroot->val) {
            return false;
        }

        return same(root->left, subroot->left) &&
               same(root->right, subroot->right);
    }

    bool solve(TreeNode* root, TreeNode* subroot) {

        if(root == NULL) {
            return false;
        }

        if(same(root, subroot)) {
            return true;
        }

        return solve(root->left, subroot) ||
               solve(root->right, subroot);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return solve(root, subRoot);
    }
};
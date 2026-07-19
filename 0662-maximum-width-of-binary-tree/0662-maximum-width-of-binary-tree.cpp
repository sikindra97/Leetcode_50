class Solution {
public:
    int ans = 0;

    void solve(TreeNode *root) {

        if(root == NULL){
            return;
        }

        queue<pair<TreeNode*, long long>> q;
        q.push({root,0});

        while(!q.empty()){

            int size = q.size();
            long long first = 0;
            long long last = 0;
            long long minIndex = q.front().second; 

            for(int i = 0; i < size; i++){

                auto temp = q.front();
                q.pop();

                 long long index = temp.second - minIndex;  

                if(i == 0){
                    first = index;             
                }

                if(i == size - 1){
                    last = index;
                }

                TreeNode *node = temp.first;

                if(node->left){
                    q.push({node->left,2*index+1});
                }

                if(node->right){
                    q.push({node->right,2*index+2});
                }
            }

            ans = max(ans, (int)(last - first + 1));   
        }
    }

    int widthOfBinaryTree(TreeNode* root) {

        solve(root);

        return ans;
    }
};
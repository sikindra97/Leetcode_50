/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

     void dfs(TreeNode *root,string &s){
        if(root==NULL){
            s+='#';
            s+=',';
            return;
        }
        s+=to_string(root->val)+',';
        dfs(root->left,s);
        dfs(root->right,s);
     }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string res="";
        dfs(root,res);
        return res;
    }

    TreeNode *build(vector<string>&temp,int &idx){
        if(temp[idx]=="#"){
            idx++;
            return NULL;
        }
         
         TreeNode *root=new TreeNode(stoi(temp[idx]));
         idx++;

         root->left=build(temp,idx);
         root->right=build(temp,idx);

         return root;

    }
    // Decodes your encoded data to tree.
   TreeNode* deserialize(string data) {
    vector<string> temp;
    string s = "";

    for(int i = 0; i < data.size(); i++) {
        if(data[i] == ',') {
            temp.push_back(s);
            s = "";
        } else {
            s += data[i];
        }
    }

    int idx = 0;
    return build(temp, idx);
}
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
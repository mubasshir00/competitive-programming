class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
       inordertraverse(root,v);
       return v;
    }
     void inordertraverse(TreeNode* root, vector<int>&v){
         if(!root){
             return;
         }
        inordertraverse(root->left,v);
        v.push_back(root->val);
        inordertraverse(root->right,v);
    }
};

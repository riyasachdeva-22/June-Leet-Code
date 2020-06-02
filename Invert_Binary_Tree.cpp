//invert binary tree
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return root;
        TreeNode *r=invertTree(root->right);
        TreeNode *l=invertTree(root->left);
        root->right=l;
        root->left=r;
        return root;
        
    }
};

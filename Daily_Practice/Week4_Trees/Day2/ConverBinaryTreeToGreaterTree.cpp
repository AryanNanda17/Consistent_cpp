class Solution {
public:
    void helper(TreeNode* root, int &val){
        if(!root)return;
        helper(root->right, val);
        root->val +=val;
        val = root->val;
        helper(root->left, val);
    }
    TreeNode* convertBST(TreeNode* root) {
        int sum = 0;
        helper(root, sum);
        return root;
    }
};
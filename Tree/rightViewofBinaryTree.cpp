class Solution {
public:
    void recursive(TreeNode*root, int level, vector<int>&res){
        if(!root)
        return;

        if(res.size()==level)
        res.push_back(root->val);

        recursive(root->right, level+1, res);
        recursive(root->left, level+1, res);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        
        recursive(root, 0 , res);
        return res;
    }
};
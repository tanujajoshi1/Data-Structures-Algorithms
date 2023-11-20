class Solution {
public:


    int diameterOfBinaryTree(TreeNode* root) {  
        int res=0;
        heightt(root,res);
        return res;
    }

        int heightt(TreeNode*root,int &res){
        if (root==NULL)
        return 0;

        int l=heightt(root->left,res);
        int r=heightt(root->right,res);

        res= max(l+r, res);
        return max(l,r)+1;

    }
};
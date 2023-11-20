void atKdistance(Node*root,int k){
        if(root==NULL)
        return 0;

        if(k==0)
        cout<<root-data;

        atKdistance(root->left,k-1);
        atKdistance(root->right,k-1);
}
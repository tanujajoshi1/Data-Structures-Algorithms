struct Node{
    int data;
    Node*root, *left, *right;   
};

void BFSTraversal(Node*root){
    if(root==NULL)
    return;

    queue<Node*>q;
    q.push(root);

    while(!q.empty()){

        Node*node=q.front();
        cout<<node->data;
        q.pop();

        if(node->left!=NULL)
        q.push(node->left);

        if(node->right!=NULL)
        q.push7(node->right);

    }
}
vector<int> bottomView(TreeNode*root){
  vector<int>res;
  queue<pair<TreeNode*,int>>;
  map<int,int>mp;
  if(root==NULL)
    return res;
  q.push({root,0});
  while(!q.empty()){
    auto it=q.front();
    q.pop();
    int node = it.first;
    int level = it.second;
    mp[level]=node;
    if(root->left)
     q.push({root->left,level-1});
    if(root->right)
      q.push({root->right,level+1})
  }
  for(auto it:mp){
   res.push_back(it.second);
  }
  return res;
}

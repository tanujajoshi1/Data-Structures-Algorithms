// Detect Cycle in a Directed Graph using DFS

bool isCycle(vector<int>adj, int v){
    int dfsvis[v], int vis[v];
    memset(vis, 0, sizeof(vis));
    memset(dfsvis, 0, sizeof(dfsvis));

    for(int i=0;i<v;i++){
        if(!visited[i])
        {
            if(dfs(i,dfsvis, vis, adj));
            return true;
        }
    }
    return false;
}
bool dfs(int node, int dfsvis[], int vis[], vector<int> adj[]){
    dfsvis[node]=1;
    vis[node]=1;

    for(auto it: adj[node]){
        if(vis[it]==false){
            if(dfs(it, dfsvis, vis, adj))
            return true;
        }
        else if(dfsvis[it]==true)
        return true;
    }
    
    dfsvis[node]=0;
    return false;
}
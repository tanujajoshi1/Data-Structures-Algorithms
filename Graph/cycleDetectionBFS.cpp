//Detect cycle in direct graph using BFS
 bool isCycleBFS(vector<int>adj, int v){
    queue<int>q;
    vector<int>indegree(v,0);
    for(int i=0;i<V;i++){
        for(auto it: adj[i]){
            indegree[i]++;
        }
    }

    for(int i=0;i<v;i++){
        if(indegree[i]==0)
        q.push(i);
    }
int count=0;
    while(!q.empty()){
        int node =q.front(); q.pop();
        count++;
        for(auto it: adj[node]){
            indegree[it]--;
            if(indegree[it]==0)
            q.push(it);
        }
    }
    if(count==v)
    return false;
    else
    return true;
}
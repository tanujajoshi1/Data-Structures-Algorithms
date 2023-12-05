////Topological Sort - BFS - queue, visited, res
vector<int>topoSort(int V, vector<int>adj){

int indegree[V]={0};
for(int i=0;i<V;i++){
    for(auto it: adj[i]){
        indegree[i]++;
    }
}
queue<int>q;
for(int i=0;i<V;i++){
    if(indegree[i]==0)
    q.push(i);
}

vector<int>res;
while(!q.empty()){
    int node =q.front();
    q.pop();
    res.push_back(node);
        for(auto it: adj[node]){
        indegree[it]--;
        if(indegree[it]==0)
        q.push(it);
    }

}
return res;
}
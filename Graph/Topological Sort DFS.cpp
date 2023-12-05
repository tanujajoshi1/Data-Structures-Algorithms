////Topological sort using DFS - Stack, Visited Array, Result Array

void dfs(int node, vector<int>adj[], int visited[], stack<int>st){
            visited[node]=1;
            for(auto it: adj[node]){
                if(!visited[it])
                dfs(it, adj, visited,st);
            }

            st.push(node);
}


vector<int>topoSort(int V, vector<int>adj[]){

    stack<int>st;
    vector<int>res;
    int visited[V]={0};

    for(int i=0;i<V;i++){
        if(!visited[i])
        dfs(i, adj, visited, st);
    }

    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    return res;
}


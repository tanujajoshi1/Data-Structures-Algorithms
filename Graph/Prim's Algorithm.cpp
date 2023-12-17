   
   //time = O(E log E)
   //space = O(E)
   
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        priority_queue< pair<int,int>,
                        vector<pair<int,int>>,
                        greater<pair<int,int>>
                        >pq;
        int vis[V]={0};
        pq.push({0,0});
        int sum=0;
        while(!pq.empty()){
            int node = pq.top().second;
            int wt = pq.top().first;
            pq.pop();
            
            if(vis[node]==1) continue;
            vis[node]=1;
            sum+=wt;
            for(auto it: adj[node]){
                int node1 = it[0];
                int wt1 = it[1];
                if(!vis[node1])
                pq.push({wt1,node1});
            }
        }
        return sum;
        
        
    }
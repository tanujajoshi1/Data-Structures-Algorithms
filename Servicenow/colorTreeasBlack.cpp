//https://leetcode.com/discuss/interview-question/1764999/ServiceNow-or-OA-or-Tree-Question
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0 || n==1)
    return 1;

    return n*fact(n-1;)
}
int countOFways(int n, vector<vector<int>adj, int index){
    if(adj[index].size()==0)
    return 1;
    else{
        int no_of_children = adj[index].size();
        int prod=1;
        for(auto it: adj[index]){
            prod*=countOFways(n, adj, it);
        }
        return fact(no_of_children)*prod;
    } 
}

int main(){
    int n,e;
    cin>>n>>e;
    vector<int>from(e),to(e);

    for(int i=0;i<e;i++)
    cin>>from[i];
    for(int i=0;i<e;i++)
    cin>>to[i];

    vector<vector<int>>adj;
    for(int i=0;i<e;i++){
        adj[from[i-1]].push_back(to[i-1]);
    }

    cout<<countOFways(n,adj,0); //no_of_nodes, adjacency list, index 0
    return 0;   
}
//https://www.hackerrank.com/contests/codeshala-pps-24/challenges/chocolate-distribution-problem-4/submissions/code/1370946184

#include<bits/stdc++.h>

using namespace std;
int solve(int arr[], int n, int m){
    sort(arr, arr+n);
    // for(int i=0;i<n;i++)
    //     cout<<arr[i]<<" ";
    int res=INT_MAX;
    for(int i=0;(m+i-1)<n;i++){
        int mini = arr[i];
        int maxi= arr[m+i-1];
        int diff=maxi-mini;
        // cout<<"Min:"<<mini<<" Maxi:"<<maxi<<endl;
        // cout<<"diff:"<<diff<<endl;
        
        res=min(diff,res);
        // cout<<"RES:"<<res<<endl;
    }
    return res;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int m; cin>>m;
    int res= solve(arr,n,m);
    cout<<res;
    return 0;
}

//https://www.geeksforgeeks.org/minimum-number-of-operations-to-convert-array-a-to-array-b-by-adding-an-integer-into-a-subarray/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>a,b,diff;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)    //3, 7, 1, 4, 1, 2  or 1, 1, 1, 1, 1 
    cin>>a[i];
    for(int i=0;i<n;i++)    //3, 7, 3, 6, 3, 2 or 1, 2, 1, 3, 1
    cin>>b[i];

 int i=0;
 while(i<n){
    if(a[i]-b[i]==0){
        i++;
        continue;
    }
    int diff = abs(a[i]-b[i]);
    i++;
    
    while(i<n && a[i]-b[i]==diff){
        i++;
    }
    ops++;

 }

cout<<ops;
    return 0;
}
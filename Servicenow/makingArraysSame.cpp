//https://www.geeksforgeeks.org/making-elements-of-two-arrays-same-with-minimum-incrementdecrement/
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>a,b;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)    //3 8 1
    cin>>a[i];
    for(int i=0;i<n;i++)    //1 2 2
    cin>>b[i];

//Sort the arrays
sort(a.begin(), a.end());   //1 3 8
sort(b.begin(),b.end());    //1 2 2

for(int i=0;i<n;i++){
    res+ = abs(a[i]-b[i]);
}
cout<<res;
return 0;
}

//https://www.geeksforgeeks.org/shuffle-a-given-array-using-fisher-yates-shuffle-algorithm/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    srand(time(NULL));

    for(int i=n-1;i>0;i--){
        int j = rand() % (i+1);

        swap(arr[i],arr[j]);    
        }

        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
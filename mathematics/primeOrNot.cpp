#include<bits/stdc++.h>
using namespace std;

bool solve(int n){
    if(n==1)
    return true;

    if(n==2 || n==3)
    return true;

    if(n%2==0 || n%3==0)
    return false;

    for(int i=5;i<=sqrt(n);i+=6){
        if(n%i==0 || n%(i+2)==0)
        return false;
    }
}

int main(){
    int n;
    cin>>n;

    bool res = solve(n);
    if(res==true)
    cout<<"Prime";
    else
    cout<<"Not Prime";
    
}

//Time  = sqrt(n)
//Space = 1
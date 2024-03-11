//https://www.geeksforgeeks.org/given-an-array-of-numbers-arrange-the-numbers-to-form-the-biggest-number/
#include<bits/stdc++.h>
using namespace std;

int compare(string x, string y){
    string xy= x.append(y);
    string yx= y.append(x);

    return xy.compare(yx)>0?1:0;
}

void biggestnumber(vector<string>s){
    sort(s.begin(),s.end(),compare);
    for(int i=0;i<s.size();i++)
    cout<<s[i];
}
int main(){
    vector<string>s;
    s.push_back("56");
    s.push_back("45");
    s.push_back("789");

    biggestnumber(s);

 return 0;
}
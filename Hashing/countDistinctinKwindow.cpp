int countDistinctElementinWindow(vector<int>&arr, intk){
    int n= arr.size();
    unordered_map<int,int>mp;
    for(int i=0;i<k;i++){
        mp[arr[i]]++;
    }

    for(int i=k;i<n;i++){
        mp[arr[i-k]]-=1;

        if(mp.find(mp[arr[i-k]])==mp.end())
        mp.erase(mp[arr[i-k]]);

        mp.insert({arr[i],i});
    }
    cout<<mp.size();
}
// time = O(n)
// space = O(1)
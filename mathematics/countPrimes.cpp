class Solution {
public:
    int countPrimes(int n) {
        
        vector<bool>v(n+1,true);
        int count=0;
        for(long long int i=2;i<=n;i++){
            if(v[i]==true &&i<n)
            {
            count++;
            for(long long int j=i*2; j<=n; j = j+i){
                v[j]=false;
     
            }
        }
        }
        return count;
    }
};
//It would have been more optimised if we'd done j=i*i and not j=i*2
//but since it will give us memory error TLE we're not using it
//Time = nloglogn
//Space = n
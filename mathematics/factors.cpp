class Solution{
    void findfactors(int n){
        for(int i=1;i<sqrt(n);i++){
            if(n%i==0)
            cout<<i<<" ";
        }

        for(;i>=1;i--){
            if(n%i==0)
            cout<<n/i<<" ";
        }
    }
};

//Time = sqrt(n)
//space = 1
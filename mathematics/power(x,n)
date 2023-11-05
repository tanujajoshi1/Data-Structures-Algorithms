class Solution {
public:
    double myPow(double x, int n1) {
        long n = n1;
        double res =1.0;
        if(n1<0){
            n=-1*n;
        }

        while(n>0){
            if(n%2!=0){
                res = res *x;
            }
            x=x*x;
            n=n/2;
            }

        if(n1<0)
            return double(1.0/res);        
        else 
        return res;
    }
};

// Time Complexity = log n
// Aux Space = 1
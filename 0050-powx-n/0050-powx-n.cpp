class Solution {
public:
//     double pow_raise(double x,long n){
// if(n==0) return 1.0;
// if(n==1) return x;

//      if(n%2==0) return pow_raise(x*x,n/2);
//      else return x*pow_raise(x,n-1);
//     }
//     double myPow(double x, int n) {
//         long m=n;
//         if(m<0){
//             x=1/x;
//             m=-m;
//         }
//         return pow_raise(x,m);
//     }
    double myPow(double x, int n) {
        double res = 1;
        while (n) {
            if (n % 2) res = n > 0 ? res * x : res / x;
            x = x * x;
            n /= 2;
        }
        return res;
    }
};
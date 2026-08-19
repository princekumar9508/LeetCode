double power(double x,long long n){
    if(n==0)return 1;
    if(n==1)return x;
    if(n<0)return 1/power(x,-n);
    if(n%2==0){
        double ans=power(x,n/2);
        return ans*ans;
    }
    else{
        double ans=power(x,n/2);
        return ans*ans*x;
    }
}
class Solution {
public:
    double myPow(double x, long long n) {
        return power(x,n);
    }
};
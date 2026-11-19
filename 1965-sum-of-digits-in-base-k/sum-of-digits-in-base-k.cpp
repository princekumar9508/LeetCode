class Solution {
public:
    int sumBase(int n, int k) {
        int sum=0;
        while(n>0){
            int dig=n%k;
            sum=sum+dig;
            n=n/k;
        }
        return sum;
    }
};
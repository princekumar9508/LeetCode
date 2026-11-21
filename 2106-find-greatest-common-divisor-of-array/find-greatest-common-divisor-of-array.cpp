class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int smallest=nums[0];
        for(int i=smallest;i>=1;i--){
           if(nums[n-1]%i==0){
            if(smallest % i==0 )return i;
           }
        }
        return 0;
    }
};
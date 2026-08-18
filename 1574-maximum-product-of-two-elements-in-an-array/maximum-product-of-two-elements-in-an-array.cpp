class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int num1=nums[n-1];
        int num2=nums[n-2];
        int ans=(num1-1)*(num2-1);
        return ans;
    }
};
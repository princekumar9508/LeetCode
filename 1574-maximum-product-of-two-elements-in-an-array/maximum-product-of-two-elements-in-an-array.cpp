class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int temp=nums[n]-1;
        int temp2=nums[n-1]-1;
        return temp*temp2;
        
    }
};
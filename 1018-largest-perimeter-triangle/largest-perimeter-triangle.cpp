class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(int i=n;i>=2;i--){
            if((nums[i-2]+nums[i-1])>nums[i]){
                return nums[i-2]+nums[i-1]+nums[i];
            }
        }
        return 0;
        
    }
};
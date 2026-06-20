class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++){
            if(i>0&& nums[i]==nums[i-1]){
                continue;
            };
            int start=i+1;
            int end=nums.size()-1;
            while(start<end){
                int sum=nums[i]+nums[start]+nums[end];
                if(sum<0){
                    start=start+1;
                }
                else if(sum>0){
                    end=end-1;
                }
                else{
                    ans.push_back({nums[i],nums[start],nums[end]});
                    start=start+1;
                    end=end-1;
                     while(start < end && nums[start] == nums[start - 1])
                        start++;

                    // Skip duplicate end values
                    while(start < end && nums[end] == nums[end + 1])
                        end--;
                }
        
            }
        }
        return ans;
        
    }
};
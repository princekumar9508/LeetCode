class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) { // Check every other number
                if (nums[i] + nums[j] == target) {
                    return {i, j}; // Correct vector return syntax
                }
            }
        }
        return {};
    
        
    }
};
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int max_element=nums[n-1];
        for(int i=0;i<n;i++){
            count=count+(max_element-nums[i]);
        }
        return count;
    }
};
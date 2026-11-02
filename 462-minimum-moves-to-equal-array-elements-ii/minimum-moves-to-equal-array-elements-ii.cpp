class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int middle_element=nums[n/2];
        int count=0;
        for(int i=0;i<nums.size();i++){
            count=count+abs(nums[i]-middle_element);
        }
        return count;
    }
};
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closest=nums[0]+nums[1]+nums[2];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int start=i+1;
            int end=nums.size()-1;
            while(start<end){
                sum=nums[i]+nums[start]+nums[end];
                if(abs(sum-target)<abs(closest-target)){
                    closest=sum;
                }
                if(sum==target){
                    return sum;
                }    
                else if(sum<target){
                    start=start+1;
                }
                else{
                    end=end-1;
                }
            }
        }
        return closest;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int current=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(count==0){
                current=nums[i];
                count=count+1;
            }
            else if(nums[i]==current){
                count=count+1;
            }
            else{
                count=count-1;
                
            }
        }
        return current;
    }
};
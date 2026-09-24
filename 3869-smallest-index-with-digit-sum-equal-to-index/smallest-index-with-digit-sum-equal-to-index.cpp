class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int sum=0;
            int temp=nums[i];
            while(temp>0){
                int dig=temp%10;
                sum=sum+dig;
                temp=temp/10;
            }
            if(i==sum){
                return i;
            }
        }
        return -1;
    }
};
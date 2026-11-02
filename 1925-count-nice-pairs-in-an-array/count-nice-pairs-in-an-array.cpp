class Solution {
public:
    int rev(int num){
        int ans=0;
        while(num>0){
            int dig=num%10;
            ans=ans*10+dig;
            num=num/10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            nums[i]=nums[i]-rev(nums[i]);
        }
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){
                count=count%1000000007;
                count=count+mp[nums[i]];
                //mp[nums[i]]++;
            }
            mp[nums[i]]++;
            
        }
        return count%1000000007;

    }
};
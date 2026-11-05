class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>arr=nums;
        unordered_map<int,int>mp;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])==mp.end()){
                mp[arr[i]]=i;
            }
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(mp[nums[i]]);
        }
        return ans;
    }
};
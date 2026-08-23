class Solution {  
public:
    void sub(vector<int>& nums,vector<int>ans,vector<vector<int>>&final,int index){
        if(index==nums.size()){
            final.push_back(ans);
            return;
        }
        sub(nums,ans,final,index+1);
        ans.push_back(nums[index]);
        sub(nums,ans,final,index+1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>fianl;
        vector<int>ans;
        sub(nums,ans,fianl,0);
        return fianl;
    }
};
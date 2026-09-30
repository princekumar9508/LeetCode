class Solution {
public:
    int reverse(int nums){
        int temp=0;
        while(nums>0){
            int dig=nums%10;
            temp=temp*10+dig;
            nums=nums/10;
        }
        return temp;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
            int rev=reverse(nums[i]);
            st.insert(rev);
        }
        return st.size();
    }
};
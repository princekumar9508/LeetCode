class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
       int n = nums.size();
       if (n <= 2) return -1;
       int num1=nums[0];
       int num2=nums[1];
       int num3=nums[2];
       if((num1>num2 &&num1<num3)||(num1<num2 && num1>num3))return num1;
       if((num2>num1 && num2<num3)||(num2<num1&& num2>num3))return num2;
       return num3;
;    }
};
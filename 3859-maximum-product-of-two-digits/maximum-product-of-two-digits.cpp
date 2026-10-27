class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;
        while(n>0){
            int dig=n%10;
            ans.push_back(dig);
            n=n/10;
        }
        sort(ans.begin(),ans.end());
        int a=ans.size();
        return (ans[a-1]*ans[a-2]);
    }
};
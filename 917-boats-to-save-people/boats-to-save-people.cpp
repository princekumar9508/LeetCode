class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int left=0;
        int end=n-1;
        int count=0;
        while(left<=end){
            if(arr[left]+arr[end]<=limit){
                left++;
            }
            end--;
            count=count+1;
        }
        return count;
    }
};
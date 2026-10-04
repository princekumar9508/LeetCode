class Solution {
public:
    bool checkValidString(string s) {
        int low=0;
        int high=0;
        for(char c:s){
            if(c=='('){
                low=low+1;
                high=high+1;
            }
            else if(c==')'){
                low=low-1;
                high=high-1;
            }
            else{
                low=low-1;
                high=high+1;
            }
            low=max(0,low);
            if(high<0)return false;
        }
        return low==0;
    }
};
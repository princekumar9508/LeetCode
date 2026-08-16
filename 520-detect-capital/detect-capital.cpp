class Solution {
public:
    bool detectCapitalUse(string word) {
        int uppercount=0;
        int lowercount=0;
        int n=word.length();
        for(int i=0;i<word.length();i++){
            if(isupper(word[i])){
                uppercount=uppercount+1;
            }
            else{
                lowercount=lowercount+1;
            }
        }
        if(uppercount==n) return true;
        if(lowercount==n)return true;
        if(isupper(word[0])&&lowercount==n-1)return true;
        return false;
    }
};
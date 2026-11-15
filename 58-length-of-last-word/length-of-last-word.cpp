class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        int length=0;
        while(i>=0 && s[i]==' '){
            i=i-1;
        }
        while(i>=0 && s[i]!=' '){
            length=length+1;
            i=i-1;
        }
        return length;
    }
};
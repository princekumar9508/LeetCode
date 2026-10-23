class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,int>map1;
        unordered_map<char,int>map2;
        for(auto c:s){
            map1[c]++;
        }
        for(auto p:t){
            map2[p]++;
        }
        for(auto p:map1){
            if(p.second!=map2[p.first]){
                return false;
            }
        }
        return true;
    }
};
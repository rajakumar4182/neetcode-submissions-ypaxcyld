class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp1,mp2;
        if(s.length() != t.length()){
            return false;
        }

        for(auto it1: s){
            mp1[it1]++;
        }
        for(auto it2:t){
            mp2[it2]++;
        }

        for(auto elem :mp1){
            if(mp1[elem.first] != mp2[elem.first]) return false;
        }
        return true;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i =0,j=0;
        int count = 0;
        
        unordered_set<char> st;

        if(s.size()==0) return count;

        while(j<s.size()){
            if(st.find(s[j]) == st.end()){
                st.insert(s[j]);
                count = max(count,j-i+1);
                j++;
            }
            else{
                st.erase(s[i]);
                i++;
            }
        }

        return count;
    }
};

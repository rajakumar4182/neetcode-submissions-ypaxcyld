class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st(nums.begin(),nums.end());

        int longest = 0;

        for(int num: st){
            if(st.find(num-1) == st.end()){
                int leng = 1;
                while(st.find(num+ leng) != st.end()){
                    leng++;
                }
                longest = max(leng,longest);
            }
        }
        return longest;
    }
};

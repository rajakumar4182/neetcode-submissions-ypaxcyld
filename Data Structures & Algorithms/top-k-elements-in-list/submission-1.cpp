class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(auto it:nums){
            mp[it]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto &p: mp){
            bucket[p.second].push_back(p.first);
        }
        for(int i=nums.size();i>=0 && ans.size()<k;i--){
            for(int n : bucket[i]){
                ans.push_back(n);
                if(ans.size()==k) break;
            }
        }
        return ans;
    }
};

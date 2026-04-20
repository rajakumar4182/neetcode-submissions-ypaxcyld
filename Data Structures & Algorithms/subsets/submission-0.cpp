class Solution {
public:

    void solve(vector<int>& nums, vector<int>& ans, int i,vector<vector<int>>& res){
        if(i==nums.size()){
            res.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        solve(nums,ans,i+1,res);

        ans.pop_back();
        solve(nums,ans,i+1,res);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ans;
        int i =0;
        solve(nums,ans, i,res);
        return res;
    }
};

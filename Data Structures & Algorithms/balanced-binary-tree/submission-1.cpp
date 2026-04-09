/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        bool diffH = true;

        dfs(root, diffH);
        return diffH;
    }
    private:
    int dfs(TreeNode* root, bool& diffH){
        if(!root) return 0;

        int left = dfs(root->left,diffH);
        int right = dfs(root->right,diffH);

        if(abs(left-right) > 1) diffH = false;

        return 1 + max(left,right);
    }
};

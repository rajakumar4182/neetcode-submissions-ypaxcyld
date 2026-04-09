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
    bool isSame(TreeNode* r, TreeNode* t){
        if(!r && !t) return true;
        if(!r || !t) return false;
        if(r->val != t->val) return false;

        return isSame(r->left,t->left) && isSame(r->right , t->right);

    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;

        if(isSame(root,subRoot) == true) return true;
        else return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot) ;

    }
};

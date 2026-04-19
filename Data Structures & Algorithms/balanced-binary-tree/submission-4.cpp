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
bool balanced=true;
    bool isBalanced(TreeNode* root) {
        if(root==nullptr)
        return true;
        dfs(root,0);
        return balanced;
    }
    int dfs(TreeNode* node, int len)
    {
        if(node==nullptr)
        return 0;

        int lh=dfs(node->left,len);
        int rh=dfs(node->right,len);
        if(abs(lh-rh)>1)
        balanced=false;

        return max(lh,rh)+1;


    }
};

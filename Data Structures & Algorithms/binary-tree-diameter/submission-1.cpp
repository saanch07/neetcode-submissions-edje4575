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
int maxLen;
    int diameterOfBinaryTree(TreeNode* root) {
        maxLen=0;
        dfs(root,0);
        return maxLen;
        
    }
    int dfs(TreeNode* node,int len)
    {
        if(node==nullptr)
        return 0;

        int lh=dfs(node->left,len);
        int rh=dfs(node->right,len);
        maxLen=max(maxLen,rh+lh);
        return max(lh,rh)+1;

    }
};

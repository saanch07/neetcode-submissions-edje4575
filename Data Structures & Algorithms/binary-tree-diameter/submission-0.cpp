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
int maxD=0;
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr)
        return 0;

        dfs(root,0);
        return maxD;
        
    }
    int dfs(TreeNode* node,int d)
    {
        if(node==nullptr)
        return 0;

        int lh=dfs(node->left,d+1);
        int rh=dfs(node->right,d+1);
        maxD=max(maxD,lh+rh);
        return 1+max(lh,rh);
    }
};

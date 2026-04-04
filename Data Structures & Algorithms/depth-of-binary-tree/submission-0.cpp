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
int maxL=0;
    int maxDepth(TreeNode* root) {
        if(root==nullptr)
        return 0;
        
        dfs(root,0);
        return maxL;
        
    }
    int dfs(TreeNode* node,int depth)
    {
        if(node==nullptr)
        return depth;

        int l=dfs(node->left,depth+1);
        int r=dfs(node->right,depth+1);
        int len=max(l,r);
        maxL=max(maxL,len);
        return len;

    }
};

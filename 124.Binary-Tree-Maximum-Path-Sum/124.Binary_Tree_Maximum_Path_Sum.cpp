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
int dfs(TreeNode* root, int& maxval)
{
    if(root == NULL)
    {
        return 0;
    }
    int left = max(0, dfs(root->left, maxval));
    int right = max(0, dfs(root->right, maxval));
    maxval = max(maxval, left+right+root->val);
    return max(left, right) + root->val;
}
    int maxPathSum(TreeNode* root) {
        int maxval = INT_MIN;
        dfs(root, maxval);
        return maxval;
    }
};

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
static int MOD = 1e9+7;
class Solution {
public:
    long long treesum = 0;
    long long result = 0;
    void getSum(TreeNode* root)
    {
        if(!root)
        {
            return;
        }
        treesum = treesum + root->val;
        getSum(root->left);
        getSum(root->right);
    }
    int sum(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        int sumleft = sum(root->left);
        int sumright = sum(root->right);
        result = max({result, (treesum-sumleft)*sumleft, (treesum-sumright)*sumright});
        return sumleft+sumright+root->val;
    }
    int maxProduct(TreeNode* root) {
        getSum(root);
        sum(root);
        return result%MOD;
    }
};

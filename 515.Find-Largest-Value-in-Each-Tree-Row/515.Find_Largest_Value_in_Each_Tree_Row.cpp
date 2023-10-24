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
    vector<int> largestValues(TreeNode* root) {
        vector<int> v;
        if(!root) {
            return v;
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int maxi = INT_MIN;
        while(true) {
            TreeNode* temp = q.front();
            q.pop();
            if(temp) {
                maxi = max(maxi, temp->val);
                if(temp->left) {
                    q.push(temp->left);
                }
                if(temp->right) {
                    q.push(temp->right);
                }
            }
            else {
                v.push_back(maxi);
                maxi = INT_MIN;
                if(q.empty()) {
                    break;
                }
                q.push(NULL);
            }
        }
        return v;
    }
};
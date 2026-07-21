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
TreeNode* prev = nullptr;
    int curCount = 0, maxCount = 0;
    vector<int> mode;

    void inorder(TreeNode* node) {
        if (!node) return;
        inorder(node->left);

        curCount = (prev && prev->val == node->val) ? curCount + 1 : 1;
        if (curCount > maxCount) {
            maxCount = curCount;
            mode = {node->val};      
        } else if (curCount == maxCount) {
            mode.push_back(node->val); 
        }
        prev = node;

        inorder(node->right);
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return mode;

    }
};
//Given a binary tree root, a node X in the tree is named good if in the path from root to X there are no nodes with a value greater than X.

//Return the number of good nodes in the binary tree.
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
    int countGood(int largest, TreeNode*root)
    {
        if(!root) return 0;
        if(largest > root->val)
            return countGood(largest, root->left) + countGood(largest, root->right);
        else
            return 1+countGood(root->val, root->left) + countGood(root->val, root->right);
    }
    int goodNodes(TreeNode* root) {
        return countGood(INT_MIN, root);
    }
};
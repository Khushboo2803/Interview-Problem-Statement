//Given the root of a binary tree, determine if it is a valid binary search tree (BST).
/**
A valid BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
**/
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
    void inorder(TreeNode* root, vector<int>& ret)
    {
        if(!root) return;
        inorder(root->left, ret);
        ret.push_back(root->val);
        inorder(root->right, ret);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> ret;
        if(!root) return true;
        inorder(root, ret);
        for(int i=0;i<ret.size()-1;i++)
        {
            if(ret[i]>=ret[i+1])
                return false;
        }
        return true;
    }
};
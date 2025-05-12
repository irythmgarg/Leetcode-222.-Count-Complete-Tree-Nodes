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

    // Helper function to count total number of nodes in a binary tree
    int count(TreeNode* root)
    {
        if (!root)
            return 0;
        return 1 + count(root->left) + count(root->right);
    }

    // Function to check if a binary tree is complete
    // Complete binary tree: all levels are full except possibly the last, which is filled from left to right
    bool isComplete(TreeNode* root, int nodes, int ind)
    {
        if (!root)
            return true;

        // If index assigned to current node is greater than total nodes,
        // it violates the complete tree property
        if (ind > nodes)
            return false;

        // Recursively check for left and right subtrees
        return isComplete(root->left, nodes, 2 * ind) &&
               isComplete(root->right, nodes, 2 * ind + 1);
    }

    // Main wrapper to initiate isCompleteTree from root
    bool isCompleteTree(TreeNode* root) 
    {
        if (!root)
            return true;

        int nodes = count(root);  // Total number of nodes in tree
        return isComplete(root, nodes, 1);
    }

    // Recursive function to count nodes in subtrees that are complete binary trees
    int isnot(TreeNode* root)
    {
        if (!root)
            return 0;

        // If current subtree is complete, count it
        if (isCompleteTree(root))
            return 1 + isnot(root->left) + isnot(root->right);

        // Else skip counting current node and go to subtrees
        return isnot(root->left) + isnot(root->right);
    }

    // Main function to count all complete subtrees in the binary tree
    int countNodes(TreeNode* root) 
    {
        return isnot(root);
    }
};

#include <cmath> // Required for pow()

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
    // Function to calculate height of leftmost path
    int leftHeight(TreeNode* root) {
        int count = 0;
        while (root) {
            count++;
            root = root->left;
        }
        return count;
    }

    // Function to calculate height of rightmost path
    int rightHeight(TreeNode* root) {
        int count = 0;
        while (root) {
            count++;
            root = root->right;
        }
        return count;
    }

    // Optimized function to count nodes in complete binary tree
    int countNodes(TreeNode* root) {
        if (!root)
            return 0;

        int lh = leftHeight(root);
        int rh = rightHeight(root);

        // If left and right heights are equal, it's a full tree
        if (lh == rh) {
            return pow(2, lh) - 1;
        }

        // Else, recurse on left and right subtrees
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};

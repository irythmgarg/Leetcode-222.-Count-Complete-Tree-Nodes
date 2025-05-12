# Leetcode-222.-Count-Complete-Tree-Nodes

Count Complete Tree Nodes - Problem Solution

This repository provides solutions to the problem of counting the number of nodes in a complete binary tree. A complete binary tree is a binary tree where all levels are fully filled except possibly for the last level, which is filled from left to right.

---

Problem Statement

Given the root of a binary tree, return the number of nodes in the tree. The tree is a complete binary tree.

Constraints:
1 <= nodes <= 10^5

The tree is a complete binary tree, which simplifies the problem and allows for more efficient solutions.

---

Approaches
Approach 1: Recursive Method (DFS) with Level Calculation

In this approach, we use Depth-First Search (DFS) to traverse the tree and recursively calculate the number of nodes. The key to solving this problem efficiently is leveraging the 

structure of a complete binary tree. We calculate the height of the left and right subtrees, and if they are equal, we know the tree is perfectly balanced on that side, which allows

us to calculate the number of nodes directly.

Steps:
Base Case: If the node is nullptr, return 0.

Left and Right Subtree Heights: Calculate the heights of the left and right subtrees.

Balanced Check: If the left and right subtree heights are equal, then the left subtree is a complete tree, and we can calculate the number of nodes directly.

Recursive Calculation: If the heights are not equal, recursively count the nodes in the left and right subtrees.

---

Approach 2: Iterative Method using Binary Search

This approach uses a binary search technique to check the existence of nodes at specific positions in the last level of the tree.

Steps:

Initial Check: Start by calculating the height of the tree.

Binary Search on Last Level: For the last level, perform a binary search to determine the number of nodes in that level.

Time Complexity:

---

Approach 1 (DFS): O(log^2 N) due to the height calculation being done recursively in each step.

Approach 2 (Binary Search): O(log^2 N) because for each level, a binary search is performed to find the number of nodes in the last level.

---

Space Complexity:

Approach 1 (DFS): O(H), where H is the height of the tree, due to recursion stack.

Approach 2 (Binary Search): O(1) for iterative binary search, assuming no additional space is used beyond the tree traversal.

---

Author Information

Author: Ridham Garg

Institution: Thapar University, Patiala, India

Course: B.Tech Computer Engineering

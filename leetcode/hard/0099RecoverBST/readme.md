# Question: [Recover Binary Search Tree](https://leetcode.com/problems/recover-binary-search-tree/)

>You are given the root of a binary search tree (BST), where exactly two nodes of the tree were swapped by mistake. Recover the tree without changing its structure.

>Follow up: A solution using O(n) space is pretty straight forward. Could you devise a constant space solution?


    Input: 

               3                1
             /   \       ->    / \
            2     1           2   3
         
        root = [1,3,null,null,2]
        Output: [3,1,null,null,2]
        Explanation: 3 cannot be a left child of 1 because 3 > 1. Swapping 1 and 3 makes the BST valid.

    Input: 

               3                2
             /   \       ->    / \
            1     4           1   3
                 /                /
                2                3

        root = [3,1,4,null,null,2]
        Output: [2,1,4,null,null,3]
        Explanation: 2 cannot be in the right subtree of 3 because 2 < 3. Swapping 2 and 3 makes the BST valid.

December 12 2020

@parzuko

Jivansh Sharma

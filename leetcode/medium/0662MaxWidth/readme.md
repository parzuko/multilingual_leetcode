# Question: [Maximum Width of Binary Tree](https://leetcode.com/problems/maximum-width-of-binary-tree/)

> Given a binary tree, write a function to get the maximum width of the given tree. The maximum width of a tree is the maximum width among all levels.. The width of one level is defined as the length between the end-nodes (the leftmost and right most non-null nodes in the level, where the null nodes between the end-nodes are also counted into the length calculation.

>It is guaranteed that the answer will in the range of 32-bit signed integer.

    Input: 

               1
             /   \
            3     2
           / \     \  
          5   3     9 

    Output: 4
    Explanation: The maximum width existing in the third level with the length 4 (5,3,null,9).

    Input: 

          1
         / \
        3   2
       /     \  
      5       9 
     /         \
    6           7
    Output: 8
    Explanation:The maximum width existing in the fourth level with the length 8 (6,null,null,null,null,null,null,7).

December 2 2020

@parzuko

Jivansh Sharma

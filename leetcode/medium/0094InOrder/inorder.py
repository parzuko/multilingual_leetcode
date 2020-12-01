"""
Question: https://leetcode.com/problems/binary-tree-inorder-traversal/

Given the root of a binary tree, return the inorder traversal of its nodes' values.

Input: root = [1,null,2,3]
Output: [1,3,2]

Input: root = [1]
Output: [1]

December 1 2020
@parzuko
Jivansh Sharma

"""

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def recursive_in_order(self, root, output_list):
        if root == None:
            return
        self.recursive_in_order(root.left, output_list)
        output_list.append(root.val)
        self.recursive_in_order(root.right, output_list)

    # recursive    
    def inorderTraversal(self, root):
        output_list = []
        self.recursive_in_order(root, output_list)
        return output_list
    
    # iterative
    def inorderTraversalIterative(self, root):
        output_list = []
        stack = []   
        current_node = root
        while(current_node or stack):
            if current_node:
                stack.append(current_node)
                current_node = current_node.left
            else:
                current_node = stack.pop()
                output_list.append(current_node.val)
                current_node = current_node.right
        
        return output_list
# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isValidBST(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        return self.recursive_check(root)
    def recursive_check(self, node, lower = float('-inf'), upper = float('inf')):
        if not node:
            return True
        
        val = node.val
        if val <= lower or val >= upper:
            return False

        if not self.recursive_check(node.right, val, upper):
            return False
        if not self.recursive_check(node.left, lower, val):
            return False
        return True

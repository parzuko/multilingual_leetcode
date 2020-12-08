# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class IterativeSolution:
    def isValidBST(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if not root:
            return True
            
        stack = [(root, float('-inf'), float('inf')), ] 
        while stack:
            root, lower, upper = stack.pop()
            if not root:
                continue
            val = root.val
            if val <= lower or val >= upper:
                return False
            stack.append((root.right, val, upper))
            stack.append((root.left, lower, val))
        return True  


class RecursiveSolution:
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

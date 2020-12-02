# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def __init__(self):
        self.left = {}
        self.max_width = 0

    def widthOfBinaryTree(self, root):    
        self.dfs(root, 0, 0)
        return self.max_width
    def dfs(self, root, depth, position):
        if root is None:
            return
        if depth not in self.left:
            self.left[depth] = position
        self.max_width = max(self.max_width, position - self.left[depth] + 1)
        self.dfs(root.left, depth + 1, 2 * position)
        self.dfs(root.right, depth + 1, 2 * position + 1)


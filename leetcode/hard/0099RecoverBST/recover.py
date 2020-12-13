# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def recoverTree(self, root: TreeNode) -> None:
        pre, first, second = [None], [], []
        
        def inorder(node):
            if not node: return
            inorder(node.left)
            if pre[-1] and node.val <= pre[-1].val:
                if not first: first.extend([pre[-1], node])
                else: second.extend([pre[-1], node])
            pre[-1] = node
            inorder(node.right)

        inorder(root)
        if not second: first[0].val, first[1].val = first[1].val, first[0].val
        else: first[0].val, second[1].val = second[1].val, first[0].val
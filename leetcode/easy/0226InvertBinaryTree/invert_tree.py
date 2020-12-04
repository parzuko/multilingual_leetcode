# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class IterativeSolution(object):
    def invertTree(self, root):
        if root == None:
            return None
        queue = []
        queue.append(root)

        while (len(queue) != 0):
            cur = queue.pop(0)
            temp = cur.left
            cur.left = cur.right
            cur.right = temp
            if (cur.left != None):
                queue.append(cur.left)
            if (cur.right != None):
                queue.append(cur.right)
        return root

class RecursiveSolution(object):
    def invertTree(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        if root == None:
            return None
        right = self.invertTree(root.right)
        left = self.invertTree(root.left)
        root.left = right
        root.right = left
        return root
        
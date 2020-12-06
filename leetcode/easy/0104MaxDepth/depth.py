# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class IterativeSolution(object):
    def maxDepth(self,root):
        if root == None:
            return None
        
        queue = []
        queue.append(root)

        max_height = 0

        while True:
            number_of_nodes = len(queue)
            if number_of_nodes == 0:
                return max_height
            max_height += 1

            while number_of_nodes > 0:
                current = queue[0]
                queue = queue[1:]

                if current.left != None:
                    queue.append(current.left)
                if current.right != None:
                    queue.append(current.right)
                number_of_nodes -= 1

class RecursiveSolution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root == None:
            return 0
        left_height = self.maxDepth(root.left)
        right_height = self.maxDepth(root.right)
        return max(left_height, right_height) + 1
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class IterativeSolution(object):
    def isSameTree(self, p, q):
        stack1 = []
        stack2 = []
        stack1.append(p)
        stack2.append(q)

        while( len(stack1) != 0 or len(stack2) != 0):
            cur1 = stack1[-1]
            stack1.pop()
            cur2 = stack2[-1]
            stack2.pop()

            if cur1 and not cur2:
                return False
            if not cur1 and cur2:
                return False
            if not cur1 and not cur2:
                continue
            if cur1.val != cur2.val:
                return False
            stack1.append(cur1.right)
            stack1.append(cur1.left)
            stack2.append(cur2.right)
            stack2.append(cur2.left)
        
        return (len(stack1) == 0 and len(stack2) == 0)

class RecursiveSolution(object):
    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        if (not p and not q):
            return True
        if (not p or not q):
            return False
        if (p.val != q.val):
            return False
        return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
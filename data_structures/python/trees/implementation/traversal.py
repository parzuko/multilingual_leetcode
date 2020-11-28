"""
In trees there are three general traversal methods.

1) In-Order Traversal:
    - Traverse the left subtree, i.e., call In-Order(left-subtree)
    - Visit the root.
    - Traverse the right subtree, i.e., call In-Order(right-subtree)

Uses of In-Order
In case of binary search trees (BST), In-Order traversal gives nodes in non-decreasing order. To get nodes of BST in non-increasing order, a variation of In-Order traversal where In-Order traversal s reversed can be used.

2) Pre-Order Traversal:
    - Visit the root.
    - Traverse the left subtree, i.e., call Pre-Order(left-subtree)
    - Traverse the right subtree, i.e., call Pre-Order(right-subtree) 

Uses of Pre-Order
Pre-Order traversal is used to create a copy of the tree. Pre-Order traversal is also used to get prefix expression on of an expression tree.



Suppose our tree is of the following structure 

            1
           / \
          2   3
         / \
        4   5 

In-Order Would Be:
    4 2 5 1 3
Pre-Order Would Be:
    1 2 4 5 3.

"""


class BinarySearchTreeNode:
    def __init__(self, data):
        self.value = data
        self.right = None
        self.left = None
    
def traverse_in_order(root):
    if root != None:
        traverse_in_order(root.left)
        print(root.value, end=" ")
        traverse_in_order(root.right)
    
def traverse_pre_order(root):
    if root != None:
        print(root.value, end=" ")
        traverse_pre_order(root.left)
        traverse_pre_order(root.right)

if __name__ == "__main__":
    root = BinarySearchTreeNode(1) 
    root.left      = BinarySearchTreeNode(2)
    root.right     = BinarySearchTreeNode(3)   
    root.left.left  = BinarySearchTreeNode(4)
    root.left.right  = BinarySearchTreeNode(5)
    traverse_in_order(root)     # This will print 4 2 5 1 3
    print()
    traverse_pre_order(root)    # This will print 1 2 4 5 3
    print()

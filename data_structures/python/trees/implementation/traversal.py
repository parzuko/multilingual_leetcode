"""
In trees there are three general traversal methods.

1) In-Order Traversal:
    - Traverse the left subtree, i.e., call Inorder(left-subtree)
    - Visit the root.
    - Traverse the right subtree, i.e., call Inorder(right-subtree)

Uses of Inorder
In case of binary search trees (BST), Inorder traversal gives nodes in non-decreasing order. To get nodes of BST in non-increasing order, a variation of Inorder traversal where Inorder traversal s reversed can be used.



Suppose our tree is of the following structure 

            1
           / \
          2   3
         / \
        4   5 

In-Order Would Be:
    4 2 5 1 3

"""


class BinarySearchTree:
    def __init__(self, data):
        self.value = data
        self.right = None
        self.left = None
    
def traverse_in_order(root):
    if root != None:
        traverse_in_order(root.left)
        print(root.value, end=" ")
        traverse_in_order(root.right)

if __name__ == "__main__":
    root = BinarySearchTree(1) 
    root.left      = BinarySearchTree(2)
    root.right     = BinarySearchTree(3)   
    root.left.left  = BinarySearchTree(4)
    root.left.right  = BinarySearchTree(5)
    traverse_in_order(root)


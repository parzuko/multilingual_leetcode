"""
Structure of what we're gonna create

      tree
      ----
       1    <-- root
     /   \
    2     3  
   /   
  4

"""
from traversal import traverse_in_order, traverse_pre_order 

class BinarySearchTreeNode:
    def __init__(self, data):
        self.value = data
        self.right = None
        self.left = None
        
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

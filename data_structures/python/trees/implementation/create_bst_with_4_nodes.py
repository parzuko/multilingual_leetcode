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

class BinarySearchTree:
	def __init__(self, data):
		self.value = data
		self.right = None
		self.left = None
		

# create root 
root = BinarySearchTree(1) 
    #     1 
    #   /   \ 
    #  None  None
  
root.left      = BinarySearchTree(2)
root.right     = BinarySearchTree(3)
    
# 2 and 3 become left and right children of 1 
#            1 
#          /   \ 
#         2      3 
#      /    \    /  \ 
#    None None None None
  
  
root.left.left  = BinarySearchTree(4)

# 4 becomes left child of 2 
#            1 
#        /       \ 
#       2          3 
#     /   \       /  \ 
#    4    None  None  None 
#   /  \ 
# None None
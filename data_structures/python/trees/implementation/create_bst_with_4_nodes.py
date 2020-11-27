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
		self.right = None
		

# create root 
root = Node(1) 
'''
        1 
      /   \ 
     None  None'''
  
root.left      = Node(2); 
root.right     = Node(3); 
    
''' 2 and 3 become left and right children of 1 
           1 
         /   \ 
        2      3 
     /    \    /  \ 
   None None None None'''
  
  
root.left.left  = Node(4); 
'''4 becomes left child of 2 
           1 
       /       \ 
      2          3 
    /   \       /  \ 
   4    None  None  None 
  /  \ 
None None'''
  
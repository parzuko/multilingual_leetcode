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


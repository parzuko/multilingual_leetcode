# Trees

>A tree is a frequently-used data structure to simulate a hierarchical tree structure.

>Each node of the tree will have a root value and a list of references to other nodes which are called child nodes. From graph view, a tree can also be defined as a directed acyclic graph which has N nodes and N-1 edges.

>A Binary Tree is one of the most typical tree structure. As the name suggests, a binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child.


## Tree Traversals
In trees there are three general traversal methods.

1) In-Order Traversal:
    - Traverse the left subtree, i.e., call In-Order(left-subtree)
    - Visit the root.
    - Traverse the right subtree, i.e., call In-Order(right-subtree)

### Uses of In-Order

In case of binary search trees (BST), In-Order traversal gives nodes in non-decreasing order. To get nodes of BST in non-increasing order, a variation of In-Order traversal where In-Order traversal s reversed can be used.

2) Pre-Order Traversal:
    - Visit the root.
    - Traverse the left subtree, i.e., call Pre-Order(left-subtree)
    - Traverse the right subtree, i.e., call Pre-Order(right-subtree) 

### Uses of Pre-Order

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

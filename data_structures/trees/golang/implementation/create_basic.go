package main

// BinarySearchTreeNode Class
type BinarySearchTreeNode struct {
	value int
	left  *BinarySearchTreeNode
	right *BinarySearchTreeNode
}

func main() {
	/*
	       1
	      / \
	     2   3
	    / \
	   4   5
	*/

	root := &BinarySearchTreeNode{1, nil, nil}
	root.left = &BinarySearchTreeNode{2, nil, nil}
	root.right = &BinarySearchTreeNode{3, nil, nil}
	root.left.left = &BinarySearchTreeNode{4, nil, nil}
	root.left.right = &BinarySearchTreeNode{5, nil, nil}

}

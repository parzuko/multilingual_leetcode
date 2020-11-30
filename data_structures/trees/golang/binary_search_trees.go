/*
	To run and see all methods:

	> go run *.go

*/

package main

import "fmt"

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
	fmt.Println("Created!")

	// In-Order Traversal
	fmt.Println("In-Order Traversal is:") //  This will print 4 2 5 1 3
	TraverseInOrder(root)
	fmt.Println()

}

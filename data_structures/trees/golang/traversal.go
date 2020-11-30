package main

import "fmt"

// TraverseInOrder method to be exported
func TraverseInOrder(root *BinarySearchTreeNode) {
	if root == nil {
		return
	}
	TraverseInOrder(root.left)
	fmt.Printf("%d ", root.value)
	TraverseInOrder(root.right)
}

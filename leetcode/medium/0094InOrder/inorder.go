/*
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

package main

import "fmt"

// TreeNode ( from leetcode )
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// iterative implementation
func inorderTraversal(root *TreeNode) []int {
	p := root
	output := []int{}
	stack := []*TreeNode{}
	for p != nil || len(stack) != 0 {
		for p != nil {
			stack = append(stack, p)
			p = p.Left
		}
		if len(stack) != 0 {
			tmp := stack[len(stack)-1]
			stack = stack[:len(stack)-1]
			p = tmp.Right
			output = append(output, tmp.Val)
		}
	}
	return output
}

// recursive implementation
func recursiveInOrderTraversal(root *TreeNode) []int {
	if root == nil {
		return nil
	}

	if root.Left == nil && root.Right == nil {
		return []int{root.Val}
	}

	res := inorderTraversal(root.Left)
	res = append(res, root.Val)
	res = append(res, inorderTraversal(root.Right)...)

	return res
}

func main() {
	fmt.Println("Solved : )")
}

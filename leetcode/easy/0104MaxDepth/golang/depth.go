package golang

// TreeNode Definiton
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func maxDepthRecursive(root *TreeNode) int {
	if root == nil {
		return 0
	}
	leftDepth := maxDepthRecursive(root.Left)
	rightDepth := maxDepthRecursive(root.Right)
	return findMax(leftDepth, rightDepth) + 1
}

func findMax(numberOne int, numberTwo int) int {
	if numberOne > numberTwo {
		return numberOne
	}
	return numberTwo
}

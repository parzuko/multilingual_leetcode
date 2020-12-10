package golang

// TreeNode data class
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func isValidBST(root *TreeNode) bool {
	MIN, MAX := -1<<63, 1<<63-1
	return recursiveCheck(root, MIN, MAX)
}
func recursiveCheck(node *TreeNode, min int, max int) bool {
	if node == nil {
		return true
	}
	if node.Val < min || node.Val > max {
		return false
	}
	if node.Left != nil && node.Left.Val >= node.Val {
		return false
	}
	if node.Right != nil && node.Right.Val <= node.Val {
		return false
	}

	return recursiveCheck(node.Left, min, node.Val-1) && recursiveCheck(node.Right, node.Val+1, max)
}

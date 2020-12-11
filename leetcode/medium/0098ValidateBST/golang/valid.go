package golang

// TreeNode data class
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func isValidBSTIterative(root *TreeNode) bool {
	MIN, MAX := -1<<63, 1<<63-1
	if root == nil {
		return true
	}
	stack := []*TreeNode{}
	upper := []int{}
	lower := []int{}

	stack = append(stack, root)
	upper = append(upper, MAX)
	lower = append(lower, MIN)

	for len(stack) != 0 {
		current := stack[len(stack)-1]
		stack = stack[:len(stack)-1]

		left := lower[len(lower)-1]
		lower = lower[:len(lower)-1]

		right := upper[len(upper)-1]
		upper = upper[:len(upper)-1]

		if current.Val > right || current.Val < left {
			return false
		}
		if current.Right != nil {
			if current.Right.Val <= current.Val {
				return false
			}
			stack = append(stack, current.Right)
			lower = append(lower, current.Val+1)
			upper = append(upper, right)
		}
		if current.Left != nil {
			if current.Left.Val >= current.Val {
				return false
			}
			stack = append(stack, current.Left)
			lower = append(lower, left)
			upper = append(upper, current.Val-1)
		}
	}
	return true

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

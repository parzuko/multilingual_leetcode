package golang

// TreeNode Definiton
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func maxDepthIterative(root *TreeNode) int {
	if root == nil {
		return 0
	}
	queue := make([]*TreeNode, 0)
	queue = append(queue, root)
	maxHeight := 0
	for 1 == 1 {
		numberOfNodes := len(queue)
		if numberOfNodes == 0 {
			return maxHeight
		}
		maxHeight++

		for numberOfNodes > 0 {
			current := queue[0]
			queue = queue[1:]
			if current.Left != nil {
				queue = append(queue, current.Left)
			}
			if current.Right != nil {
				queue = append(queue, current.Right)
			}
			numberOfNodes--
		}
	}
	return 0

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

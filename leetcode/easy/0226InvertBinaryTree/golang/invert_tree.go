package golang

// TreeNode Definition
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func invertTreeRecursive(root *TreeNode) *TreeNode {
	if root == nil {
		return nil
	}

	queue := make([]*TreeNode, 0)
	queue = append(queue, root)

	for len(queue) != 0 {
		current := queue[0]
		queue = queue[1:]
		temp := current.Right
		current.Right = current.Left
		current.Left = temp

		if current.Right != nil {
			queue = append(queue, current.Right)
		}
		if current.Left != nil {
			queue = append(queue, current.Left)
		}

	}
	return root
}

func invertTree(root *TreeNode) *TreeNode {
	if root == nil {
		return nil
	}
	right := invertTree(root.Right)
	left := invertTree(root.Left)

	root.Right = left
	root.Left = right

	return root
}

package golang

// TreeNode Data Class
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func recoverTree(root *TreeNode) {
	var first, second, prev *TreeNode
	var dfs func(*TreeNode)
	dfs = func(root *TreeNode) {
		if root.Left != nil {
			dfs(root.Left)
		}

		if prev != nil && prev.Val > root.Val {
			if first == nil {
				first = prev
			}
			if first != nil {

				second = root
			}
		}

		prev = root

		if root.Right != nil {
			dfs(root.Right)
		}
	}

	dfs(root)
	first.Val, second.Val = second.Val, first.Val
}

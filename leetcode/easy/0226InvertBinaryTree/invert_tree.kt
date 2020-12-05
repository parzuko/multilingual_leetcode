/**
 * Example:
 * var ti = TreeNode(5)
 * var v = ti.`val`
 * Definition for a binary tree node.
 */

data class TreeNode(var `val`: Int) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

class IterativeSolution {
    fun invertTree(root: TreeNode?): TreeNode? {
        if (root == null){
            return null
        }    
        var right = invertTree(root.right)
        var left = invertTree(root.left)
        root.left = right
        root.right = left
        return root
    }
}
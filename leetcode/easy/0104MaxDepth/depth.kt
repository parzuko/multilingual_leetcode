data class TreeNode(var `val`: Int) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

class RecursiveSolution {
    fun maxDepth(root: TreeNode?): Int {
        if(root == null){
            return 0
        }
        var leftDepth = maxDepth(root.left)
        var rightDepth = maxDepth(root.right)

        if(leftDepth > rightDepth){
            return leftDepth + 1
        }else{
            return rightDepth + 1
        }
    }
}
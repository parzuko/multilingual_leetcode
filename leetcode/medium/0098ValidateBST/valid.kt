data class TreeNode(var `val`: Int) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

class RecursiveSolution {
    fun isValidBST(root: TreeNode?): Boolean {
        return recursiveHelper(root, null, null)
    }
    fun recursiveHelper(node: TreeNode?, lower: Int?, upper: Int?): Boolean{
        if(node == null){
            return true
        }
        var value = node.`val`
        if (lower != null && value <= lower) return false
        if (upper != null && value >= upper) return false
        
        if (! recursiveHelper(node.right, value, upper)) return false
        if (! recursiveHelper(node.left, lower, value)) return false
        
        return true
    }
}
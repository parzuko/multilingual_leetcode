/**
 * Example:
 * var ti = TreeNode(5)
 * var v = ti.`val`
 */

class TreeNode(var `val`: Int) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

class ReccursiveSolution {
    fun isSameTree(p: TreeNode?, q: TreeNode?): Boolean {
            if ( p == null && q == null ){
                return true
            }
            if ( p== null || q == null ){
                return false
            }
            if ( p.`val` != q.`val` ){
                return false
            }
            return isSameTree(p.right, q.right) && isSameTree(p.left, q.left)
    }
}

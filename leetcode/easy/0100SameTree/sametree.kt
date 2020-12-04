/**
 * Example:
 * var ti = TreeNode(5)
 * var v = ti.`val`
 */

data class TreeNode(var `val`: Int) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

class IterativeSolution{
    fun isSameTree(p: TreeNode?, q: TreeNode?): Boolean {
        val stk1 = Stack<TreeNode>()
        val stk2 = Stack<TreeNode>()
        stk1.push(p)
        stk2.push(q)

        while (stk1.isNotEmpty() || stk2.isNotEmpty()){
            var cur1 = stk1.peek()
            stk1.pop()
            var cur2 = stk2.peek()
            stk2.pop()

            if (cur1 is TreeNode && cur2 !is TreeNode){
                return false
            }
            if (cur1 !is TreeNode && cur2 is TreeNode){
                return false
            }
            if (cur1 !is TreeNode && cur2 !is TreeNode){
                continue
            }

            if (cur1.`val` != cur2.`val`){
                return false
            }
            stk1.push(cur1.right)
            stk1.push(cur1.left)
            stk2.push(cur2.right)
            stk2.push(cur2.left)
        }
        return !stk1.isNotEmpty() && !stk1.isNotEmpty()
    }
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

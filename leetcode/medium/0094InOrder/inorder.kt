/**
 * Example:
 * var ti = TreeNode(5)
 * var v = ti.`val`
 * Definition for a binary tree node.
 * class TreeNode(var `val`: Int) {
 *     var left: TreeNode? = null
 *     var right: TreeNode? = null
 * }
 */
class Solution{
    fun inorderTraversal(root: TreeNode): List<Int> {
        if(root == null){
            val ret = mutableListOf<Int>()
            return ret
        }
        val stk = Stack<TreeNode>()
        val ret = mutableListOf<Int>()
        var cur: TreeNode? = root
        while (cur != null || stk.isNotEmpty()) {
            while (cur != null) {
                stk.push(cur)
                cur = cur.left
            }
            cur = stk.pop()
            ret.add(cur.`val`)
            cur = cur.right
        }
        return ret
    }
}
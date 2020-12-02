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

class Solution {
    var maxWidth = 0
    val leftMost = mutableMapOf<Int, Int>()
    fun widthOfBinaryTree(root: TreeNode?): Int {
        dfs(root, 0, 0)
        return maxWidth
    }
    fun dfs(root: TreeNode?, depth: Int, position: Int){
        if (root == null){
            return
        }
        if (leftMost.containsKey(depth) == false){
            leftMost.put(depth, position)
        }
        maxWidth = getMax(maxWidth, position - leftMost.getValue(depth) + 1 )
        dfs(root.left, depth + 1, 2 * position)
        dfs(root.right, depth + 1, 2 * position + 1)
        
    }
    fun getMax(numberOne: Int, numberTwo: Int): Int{
        if (numberOne > numberTwo){
            return numberOne
        }else{
            return numberTwo
        }
    }
}
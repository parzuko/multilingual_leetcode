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
        val queue: Queue<TreeNode> = LinkedList<TreeNode>()
        queue.add(root)

        while(queue.size != 0){
            val current = queue.remove()
            val temp = current.right
            current.right = current.left
            current.left = temp

            if (current.right != null){
                queue.add(current.right)
            }
            if (current.left != null){
                queue.add(current.left)
            }
        }
        return root
    }
}


class RecursiveSolution {
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
data class TreeNode(var `val`: Int) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

class IterativeSolution{
    fun maxDepth(root: TreeNode?): Int {
        if(root == null){
            return 0
        }
        val queue: Queue<TreeNode> = LinkedList<TreeNode>()
        queue.add(root)
        var maxHeight = 0

        while (true){
            var numberOfNodes = queue.size
            if (numberOfNodes == 0){
                return numberOfNodes
            }
            numberOfNodes++

            while(numberOfNodes > 0){
                val current = queue.peek()
                queue.remove()
                if (current.left != null){
                    queue.add(current.left)
                }
                if (current.right != null){
                    queue.add(current.right)
                }
                numberOfNodes--;
            }
        }
    }
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
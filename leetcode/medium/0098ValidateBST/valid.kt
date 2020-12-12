data class TreeNode(var `val`: Int) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}


class IterativeSolution {
    fun isValidBST(root: TreeNode?): Boolean {
        val intMax = 2147483647
        val intMin = -2147483648
        if (root == null) {
            return true
        }
        
        val stack = Stack<TreeNode>()
        val upper = Stack<Int>()
        val lower = Stack<Int>()
        
        stack.push(root)
        upper.push(intMax)
        lower.push(intMin)
        
        while (stack.isNotEmpty()) {
            val current = stack.pop()
            val left = lower.pop()
            val right = upper.pop()
            
            if (current.`val` > right || current.`val` < left) {
			    return false
		    }
		    if (current.right != null ){
			    if (current.right.`val` <= current.`val`) {
				    return false
			    }
			    stack.push(current.right)
			    lower.push(current.`val` + 1)
			    upper.push(right)
		    }
		    if (current.left != null) {
			    if (current.left.`val` >= current.`val`) {
				    return false
			    }
			    stack.push(current.left)
			    lower.push(left)
			    upper.push(current.`val` - 1)
		    }
        }
        return true
    }
    
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
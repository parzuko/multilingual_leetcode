data class TreeNode(var `val`: Int) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

class RecursiveSolution {
    fun searchBST(root: TreeNode?, `val`: Int): TreeNode? {
        if (root == null){
            return root
        }
        if (root.`val` == `val`) {
            return root
        }
        if (`val` < root.`val`){
            return searchBST(root.left, `val`)
        }
        else{
            return searchBST(root.right, `val`)
        }
    }
}
/*

To Compile

kotlinc binary_search_trees.kt -include-runtime -d binary_search_trees.jar
java -jar binary_search_trees.jar
 */

class BinarySearchTreeNode(
    val value: Int,
    var left: BinarySearchTreeNode? = null,
    var right: BinarySearchTreeNode? = null,
)


fun main() {
    val root = BinarySearchTreeNode(1)
    val two = BinarySearchTreeNode(2)
    val three = BinarySearchTreeNode(3)
    val four = BinarySearchTreeNode(4)
    val five = BinarySearchTreeNode(5)

    root.left = two
    root.right = three
    two.left = four
    two.right = five

    println("Created BST!")

}
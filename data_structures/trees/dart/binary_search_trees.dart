import 'traversal.dart';

class BinarySearchTreeNode {
  final int value;
  BinarySearchTreeNode left;
  BinarySearchTreeNode right;

  BinarySearchTreeNode(this.value, this.left, this.right);
}

void main() {
  BinarySearchTreeNode root = BinarySearchTreeNode(1, null, null);
  root.left = BinarySearchTreeNode(2, null, null);
  root.right = BinarySearchTreeNode(3, null, null);
  root.left.left = BinarySearchTreeNode(4, null, null);
  root.left.right = BinarySearchTreeNode(5, null, null);
  print("Created BST!");
  traverseInOrder(root);
  print("");
}

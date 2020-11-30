import 'dart:io';

import 'binary_search_trees.dart';

void traverseInOrder(BinarySearchTreeNode root) {
  if (root == null) {
    return;
  }
  traverseInOrder(root.left);
  stdout.write("${root.value} ");
  traverseInOrder(root.right);
}
#include <iostream>
using namespace std;

struct BinarySearchTreeNode
{
    int value;
    struct BinarySearchTreeNode *left, *right;
    BinarySearchTreeNode(int value)
    {
        this->value = value;
        left = right = NULL;
    }
};

void traverse_in_order(struct BinarySearchTreeNode *root);

int main()
{
    /*
	       1
	      / \
	     2   3
	    / \
	   4   5
	*/

    struct BinarySearchTreeNode *root = new BinarySearchTreeNode(1);
    root->left = new BinarySearchTreeNode(2);
    root->right = new BinarySearchTreeNode(3);
    root->left->left = new BinarySearchTreeNode(4);
    root->left->right = new BinarySearchTreeNode(5);

    cout << "Created BST! " << endl;

    traverse_in_order(root);    // This will print 4 2 5 1 3
    cout << endl;

    return 0;
}

void traverse_in_order(struct BinarySearchTreeNode *root)
{
    if (root == NULL)
        return;

    traverse_in_order(root->left);
    cout << root->value << " ";
    traverse_in_order(root->right);
}
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
    root->left             = new BinarySearchTreeNode(2); 
    root->right         = new BinarySearchTreeNode(3); 
    root->left->left     = new BinarySearchTreeNode(4); 
    root->left->right = new BinarySearchTreeNode(5);  

    cout << "Created BST! "<<endl;

    return 0;
}
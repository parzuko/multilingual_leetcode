#include "bits/stdc++.h";
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};



// Accepted solution but because cpp is statically typed, there might be integer overflow
class RecursiveSolution
{
public:
    bool isValidBST(TreeNode *root)
    {

        return isValidBST(root, INT_MIN + 1 , INT_MAX - 1);
    }

private:
    bool isValidBST(TreeNode *node, int min, int max)
    {

        if (node == NULL)
            return true;

        if (node->val < min || node->val > max)
            return false;

        if (node->left != NULL && node->left->val >= node->val)
            return false;

        if (node->right != NULL && node->right->val <= node->val)
            return false;

        return isValidBST(node->left, min, node->val - 1) && isValidBST(node->right, node->val + 1, max);
    }
};

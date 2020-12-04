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

class IterativeSolution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == nullptr)
            return nullptr;
        queue<TreeNode*> Queue;
        Queue.push(root);
        while (!Queue.empty())
        {
            TreeNode *current = Queue.front();
            Queue.pop();
            TreeNode *temp = current->left;
            current->left = current->right;
            current->right = temp;
            if (current->left != nullptr)
                Queue.push(current->left);
            if (current->right != nullptr)
                Queue.push(current->right);
        }
        return root;
    }
};

class RecursiveSolution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == nullptr)
        {
            return nullptr;
        }
        TreeNode *right = invertTree(root->right);
        TreeNode *left = invertTree(root->left);
        root->left = right;
        root->right = left;
        return root;
    }
};
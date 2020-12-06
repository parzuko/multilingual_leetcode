#include "bits/stdc++.h"
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
    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        queue<TreeNode *> queue;
        queue.push(root);
        int max_height = 0;

        while (true)
        {
            int number_of_nodes = queue.size();
            if (number_of_nodes == 0)
            {
                return max_height;
            }
            max_height++;

            while (number_of_nodes > 0)
            {
                TreeNode *current = queue.front();
                queue.pop();
                if (current->left != nullptr)
                {
                    queue.push(current->left);
                }
                if (current->right != nullptr)
                {
                    queue.push(current->right);
                }
                number_of_nodes--;
            }
        }
    }
};

class RecursiveSolution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        int depth_of_left = maxDepth(root->left);
        int depth_of_right = maxDepth(root->right);

        return max(depth_of_left, depth_of_right) + 1;
    }
};
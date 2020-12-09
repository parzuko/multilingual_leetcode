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
    bool isValidBST(TreeNode *root)
    {

        if (!root)
            return true;

        stack<TreeNode *> st;
        stack<int> upper, lower;

        st.push(root);
        upper.push(INT_MAX);
        lower.push(INT_MIN);
        while (!st.empty())
        {
            TreeNode *cur = st.top();
            st.pop();

            int left = lower.top();
            lower.pop();

            int right = upper.top();
            upper.pop();

            if (cur->val > right || cur->val < left)
                return false;

            if (cur->right)
            {
                if (cur->right->val <= cur->val)
                    return false;
                st.push(cur->right);
                lower.push(cur->val + 1);
                upper.push(right);
            }

            if (cur->left)
            {
                if (cur->left->val >= cur->val)
                    return false;
                st.push(cur->left);
                lower.push(left);
                upper.push(cur->val - 1);
            }
        }
        return true;
    }
};

// Accepted solution but because cpp is statically typed, there might be integer overflow
class RecursiveSolution
{
public:
    bool isValidBST(TreeNode *root)
    {

        return isValidBST(root, INT_MIN + 1, INT_MAX - 1);
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

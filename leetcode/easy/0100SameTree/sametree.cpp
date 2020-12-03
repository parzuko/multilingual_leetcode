#include <iostream>
#include <stack>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class RecursiveSolution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {

        if (!p && !q)
            return true;
        if (!p || !q)
            return false;
        if (p->val != q->val)
            return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

class IterativeSolution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {

        stack<TreeNode *> stack1, stack2;
        stack1.push(p), stack2.push(q);
        while (!stack1.empty() || !stack2.empty())
        {
            TreeNode *cur1 = stack1.top();
            stack1.pop();

            TreeNode *cur2 = stack2.top();
            stack2.pop();

            if (cur1 && !cur2)
                return false;
            if (!cur1 && cur2)
                return false;
            if (!cur1 && !cur2)
                continue;

            if (cur1->val != cur2->val)
                return false;
            stack1.push(cur1->right);
            stack1.push(cur1->left);
            stack2.push(cur2->right);
            stack2.push(cur2->left);
        }

        return stack1.empty() && stack2.empty();
    }
};

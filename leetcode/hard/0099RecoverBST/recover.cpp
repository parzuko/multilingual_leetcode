#include <bits/stdc++.h>
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

class Solution {
    TreeNode* CurMax = new TreeNode(INT_MIN);
    TreeNode* first = NULL;
    TreeNode* second = NULL;

public:
    void recoverTree(TreeNode* root) 
    {
       DFS(root);
       
       int temp = first->val;
       first->val = second->val;
       second->val = temp;
    }
    
    void DFS(TreeNode* node)
    {
        if (node==NULL) return;
        
        DFS(node->left);
        
        if (node->val >= CurMax->val)
            CurMax = node;
        else
        {
            if (first==NULL) 
            {
                first=CurMax;
                second=node;
                CurMax=node;
            }
            else
                second=node;
        }
        
        DFS(node->right);
            
    }
    
};

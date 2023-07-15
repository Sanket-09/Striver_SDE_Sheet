using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int height(TreeNode *root)
{
 if (root == NULL)
  return 0;
 else
  return 1 + max(height(root->left), height(root->right));
}

int isBalanced(TreeNode *root)
{
 if (root == NULL)
  return 1;
 int lh = height(root->left);
 int rh = height(root->right);
 return (abs(lh - rh) <= 1);
}
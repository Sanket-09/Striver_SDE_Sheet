using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void reverse(TreeNode *root)
{
 if (root == NULL)
  return;

 TreeNode *temp = root->left;
 root->left = root->right;
 root->right = temp;

 reverse(root->left);
 reverse(root->right);
}

TreeNode *invertTree(TreeNode *A)
{
 TreeNode *root = A;

 reverse(A);
 return A;
}
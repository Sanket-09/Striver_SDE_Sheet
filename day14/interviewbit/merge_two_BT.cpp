using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *solve(TreeNode *A, TreeNode *B)
{
 if (A == NULL && B == NULL)
  return NULL;
 if (A == NULL || B == NULL)
  return A ? A : B;
 TreeNode *curr = new TreeNode(A->val + B->val);
 curr->left = solve(A->left, B->left);
 curr->right = solve(A->right, B->right);
 return curr;
}
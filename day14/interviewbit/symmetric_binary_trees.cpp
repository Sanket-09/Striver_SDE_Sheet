using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool solve(TreeNode *a, TreeNode *b)

{

 if (a == NULL || b == NULL)
  return (a == b);

 if (a->val != b->val)
  return false;

 return solve(a->left, b->right) && solve(a->right, b->left);
}

int isSymmetric(TreeNode *A)
{

 return solve(A->left, A->right);
}

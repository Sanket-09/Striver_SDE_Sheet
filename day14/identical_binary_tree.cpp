using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int isSameTree(TreeNode *A, TreeNode *B)
{

 if (A == NULL && B != NULL)
  return 0;

 if (A != NULL && B == NULL)
  return 0;

 if (A == NULL && B == NULL)
  return true;

 if (A->val != B->val)
  return false;

 bool lb = isSameTree(A->left, B->left);
 bool rb = isSameTree(A->right, B->right);

 return lb && rb;
}
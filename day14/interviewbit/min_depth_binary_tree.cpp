using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int minDepth(TreeNode *A)
{

 if (A == NULL)
  return 0;

 int l = minDepth(A->left);
 int r = minDepth(A->right);

 if (!l || !r)
 {
  return max(l, r) + 1;
 }

 return (1 + min(l, r));
}
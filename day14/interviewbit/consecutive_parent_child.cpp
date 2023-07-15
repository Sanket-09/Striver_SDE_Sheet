using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int ans;
void rec(TreeNode *A)
{
 if (A->left != NULL)
 {
  if (abs(A->val - A->left->val) == 1)
  {
   ans++;
  }
  rec(A->left);
 }
 if (A->right != NULL)
 {
  if (abs(A->val - A->right->val) == 1)
  {
   ans++;
  }
  rec(A->right);
 }
}

int consecutiveNodes(TreeNode *A)
{
 ans = 0;
 rec(A);
 return ans;
}
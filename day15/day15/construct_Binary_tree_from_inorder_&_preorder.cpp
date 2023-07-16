using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int ind = 0;

TreeNode *build(vector<int> &A, vector<int> &B, int s, int e)
{
 int idx = -1;
 for (int i = s; i <= e; i++)
 {
  if (B[i] == A[ind])
  {
   idx = i;
   ind++;
   break;
  }
 }
 if (idx == -1)
  return NULL;
 TreeNode *root = new TreeNode(B[idx]);
 root->left = build(A, B, s, idx - 1);
 root->right = build(A, B, idx + 1, e);

 return root;
}

TreeNode *Solution::buildTree(vector<int> &A, vector<int> &B)
{
 ind = 0;
 return build(A, B, 0, B.size() - 1);
}
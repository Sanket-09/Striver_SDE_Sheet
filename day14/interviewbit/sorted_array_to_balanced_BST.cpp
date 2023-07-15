using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *help(const vector<int> &A, int start, int end)
{
 if (start > end)
  return NULL;
 int mid = start + (end - start) / 2;
 TreeNode *root = new TreeNode(A[mid]);
 root->left = help(A, start, mid - 1);
 root->right = help(A, mid + 1, end);
 return root;
}

TreeNode *sortedArrayToBST(const vector<int> &A)
{

 int n = A.size();

 return help(A, 0, n - 1);
}

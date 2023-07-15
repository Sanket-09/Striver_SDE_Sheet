using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int maxDepth(TreeNode *A)
{
 if (!A)
 {
  return 0;
 }
 int lheight = maxDepth(A->left);
 int rheight = maxDepth(A->right);
 int height = max(lheight, rheight) + 1;
 return height;
}

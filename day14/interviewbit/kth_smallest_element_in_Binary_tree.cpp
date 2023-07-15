using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void inorder(TreeNode *root, vector<int> &ans)
{
 if (root == NULL)
  return;

 inorder(root->left, ans);
 ans.push_back(root->val);
 inorder(root->right, ans);
}
int kthsmallest(TreeNode *A, int B)
{

 vector<int> ans;
 inorder(A, ans);

 return ans[B - 1];
}

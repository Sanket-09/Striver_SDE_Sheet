using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void preorder(TreeNode *root, vector<int> &ans)
{
 if (root == NULL)
  return;

 ans.push_back(root->val);
 preorder(root->left, ans);
 preorder(root->right, ans);
}

vector<int> preorderTraversal(TreeNode *A)
{

 vector<int> ans;
 preorder(A, ans);
 return ans;
}

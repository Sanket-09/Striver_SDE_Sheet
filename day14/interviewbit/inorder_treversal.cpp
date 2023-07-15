using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void helper(TreeNode *root, vector<int> &ans)
{
 if (root == NULL)
  return;

 helper(root->left, ans);
 ans.push_back(root->val);
 helper(root->right, ans);
}

vector<int> inorderTraversal(TreeNode *A)
{

 vector<int> ans;
 helper(A, ans);
 return ans;
}

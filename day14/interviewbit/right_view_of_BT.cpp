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

 queue<TreeNode *> q;
 q.push(root);

 while (!q.empty())
 {
  int size = q.size();

  for (int i = 0; i < size; i++)
  {
   TreeNode *node = q.front();
   q.pop();

   if (i == size - 1)
    ans.push_back(node->val);

   if (node->left)
    q.push(node->left);

   if (node->right)
    q.push(node->right);
  }
 }
}

vector<int> solve(TreeNode *A)
{
 vector<int> ans;
 helper(A, ans);
 return ans;
}

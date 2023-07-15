using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> solve(TreeNode *root)
{
 vector<int> ans;
 if (root == NULL)
  return ans;
 queue<TreeNode *> q;
 q.push(root);
 while (q.empty() == false)
 {
  TreeNode *node = q.front();
  ans.push_back(node->val);
  q.pop();
  if (node->right != NULL)
   q.push(node->right);
  if (node->left != NULL)
   q.push(node->left);
 }
 reverse(ans.begin(), ans.end());
 return ans;
}

using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int solve(TreeNode *A)
{
 queue<TreeNode *> q;
 q.push(A);
 int res = INT_MIN;
 while (!q.empty())
 {
  int n = q.size();
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
   TreeNode *curr = q.front();
   q.pop();
   sum += curr->val;
   if (curr->left)
   {
    q.push(curr->left);
   }
   if (curr->right)
   {
    q.push(curr->right);
   }
  }
  res = max(sum, res);
 }
 return res;
}
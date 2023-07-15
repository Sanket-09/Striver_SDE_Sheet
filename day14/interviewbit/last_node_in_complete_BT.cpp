using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> levelOrder(TreeNode *node)
{
 // Your code here
 vector<int> ans;
 if (!node)
 {
  return ans;
 }
 queue<TreeNode *> q;
 q.push(node);
 while (!q.empty())
 {
  int n = q.size();
  for (int i = 0; i < n; i++)
  {
   TreeNode *nd = q.front();
   q.pop();
   ans.push_back(nd->val);
   if (nd->left)
   {
    q.push(nd->left);
   }
   if (nd->right)
   {
    q.push(nd->right);
   }
  }
 }
 return ans;
}

int lastNode(TreeNode *A)
{

 if (!A)
 {
  return -1;
 }
 vector<int> ans;
 ans = levelOrder(A);
 return ans[ans.size() - 1];
}

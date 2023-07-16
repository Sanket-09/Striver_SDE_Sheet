using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void solver(TreeNode *root, vector<vector<int>> &ans)
{
 if (root == NULL)
  return;

 int count = 0;

 queue<TreeNode *> q;

 q.push(root);

 bool flag = false;

 while (!q.empty())
 {
  int size = q.size();
  vector<int> temp;

  for (int i = 0; i < size; i++)
  {
   TreeNode *pr = q.front();
   q.pop();

   int prr = pr->val;

   temp.push_back(prr);

   if (pr->left)
    q.push(pr->left);

   if (pr->right)
    q.push(pr->right);
  }

  flag = !flag;
  if (flag == false)
   reverse(temp.begin(), temp.end());
  count++;

  ans.push_back(temp);
 }
}
vector<vector<int>> zigzagLevelOrder(TreeNode *A)
{
 vector<vector<int>> ans;
 solver(A, ans);
 return ans;
}
using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void connect(TreeLinkNode *A)
{
 queue<TreeLinkNode *> q;
 q.push(A);
 q.push(NULL);
 TreeLinkNode *t;
 while (!q.empty())
 {
  t = q.front();
  q.pop();
  if (t)
  {
   t->next = q.front();
   if (t->left)
    q.push(t->left);
   if (t->right)
    q.push(t->right);
  }
  else if (!q.empty())
  {
   q.push(NULL);
  }
  else
   break;
 }
}
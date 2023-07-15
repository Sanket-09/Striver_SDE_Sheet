using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> verticalSum(TreeNode *A)
{
 vector<int> ans;
 if (A == NULL)
  return ans;
 map<int, map<int, vector<int>>> mp;
 queue<pair<TreeNode *, pair<int, int>>> q;
 q.push({A, {0, 0}});
 while (!q.empty())
 {
  auto p = q.front();
  q.pop();
  TreeNode *node = p.first;
  int x = p.second.first, y = p.second.first;
  mp[x][y].push_back(node->val);
  if (node->left)
   q.push({node->left, {x - 1, y + 1}});
  if (node->right)
   q.push({node->right, {x + 1, y + 1}});
 }
 for (auto it : mp)
 {
  int sum = 0;
  vector<int> v;
  for (auto itt : it.second)
  {
   v.insert(v.end(), itt.second.begin(), itt.second.end());
  }
  for (int i = 0; i < v.size(); i++)
   sum += v[i];
  ans.push_back(sum);
 }
 return ans;
}
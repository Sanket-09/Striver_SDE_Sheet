using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<vector<int>> Solution::verticalOrderTraversal(TreeNode *A)
{
 map<int, vector<int>> mp;
 queue<pair<TreeNode *, int>> q;
 vector<vector<int>> sol;
 int k = 0;
 if (A == NULL)
  return sol;
 q.push({A, 0});
 while (!q.empty())
 {
  TreeNode *temp = q.front().first;
  k = q.front().second;
  q.pop();
  mp[k].push_back(temp->val);
  if (temp->left)
   q.push({temp->left, k - 1});
  if (temp->right)
   q.push({temp->right, k + 1});
 }
 for (auto it = mp.begin(); it != mp.end(); it++)
 {
  sol.push_back(it->second);
 }
 return sol;
}
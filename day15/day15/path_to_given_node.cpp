using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool helper(TreeNode *root, int b, vector<int> &vec)
{
 if (root == NULL)
  return 0;

 vec.push_back(root->val);

 if (root->val == b)
  return 1;

 if (helper(root->left, b, vec) || helper(root->right, b, vec))
  return true;

 vec.pop_back();
 return false;
}

vector<int> Solution::solve(TreeNode *A, int B)
{
 vector<int> vec;
 bool hi = helper(A, B, vec);

 return vec;
}
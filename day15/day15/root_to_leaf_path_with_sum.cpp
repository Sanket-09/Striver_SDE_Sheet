using namespace std;
#include <bits/stdc++.h>

struct TreeNode
{
 int val;
 TreeNode *left;
 TreeNode *right;
 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void helper(TreeNode *root, int B, vector<vector<int>> &ans, vector<int> &temp)
{
 if (root == NULL)
 {
  return;
 }

 temp.push_back(root->val);
 if (root->right == NULL && root->left == NULL && B - root->val == 0)
 {
  ans.push_back(temp);
 }
 else
 {
  helper(root->left, B - root->val, ans, temp);
  helper(root->right, B - root->val, ans, temp);
 }

 temp.pop_back(); // Remove the last element before returning
}

vector<vector<int>> pathSum(TreeNode *A, int B)
{
 vector<vector<int>> ans;
 vector<int> temp;

 helper(A, B, ans, temp);
 return ans;
}

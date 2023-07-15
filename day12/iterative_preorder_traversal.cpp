using namespace std;
#include <bits/stdc++.h>

class TreeNode
{
public:
 int data;
 TreeNode *left, *right;
 TreeNode() : data(0), left(NULL), right(NULL) {}
 TreeNode(int x) : data(x), left(NULL), right(NULL) {}
 TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

vector<int> getPreOrderTraversal(TreeNode *root)
{
 // Write your code here.
 vector<int> ans;
 if (root == NULL)
  return ans;

 stack<TreeNode *> st;
 st.push(root);

 while (!st.empty())
 {
  root = st.top();
  st.pop();
  ans.push_back(root->data);

  if (root->right != NULL)
  {
   st.push(root->right);
  }

  if (root->left != NULL)
  {
   st.push(root->left);
  }
 }

 return ans;
}
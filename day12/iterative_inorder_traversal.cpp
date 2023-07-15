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

vector<int> getInOrderTraversal(TreeNode *root)

{

 stack<TreeNode *> s;
 TreeNode *temp;
 vector<int> v;
 temp = root;

 while (true)
 {
  if (temp != NULL)
  {
   s.push(temp);
   temp = temp->left;
  }

  else
  {
   if (s.empty() == true)
   {
    break;
   }

   temp = s.top();
   s.pop();
   v.push_back(temp->data);
   temp = temp->right;
  }
 }

 return v;
}
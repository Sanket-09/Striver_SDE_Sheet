using namespace std;
#include <bits/stdc++.h>

void solve(string &ans, vector<string> &lst, int index)
{
 if (index >= ans.length())
 {
  lst.push_back(ans);
  return;
 }

 for (int i = index; i < ans.length(); i++)
 {
  swap(ans[index], ans[i]);
  solve(ans, lst, index + 1);
  swap(ans[index], ans[i]);
 }
}

string kthPermutation(int n, int k)
{
 // Write your code here
 string ans = "";

 for (int i = 1; i <= n; i++)
 {
  string temp = to_string(i);
  ans += temp;
 }

 vector<string> lst;
 int index = 0;
 solve(ans, lst, index);

 vector<int> inter;

 while (lst.size())
 {
  string temp = lst.back();
  int temp2 = stoi(temp);
  lst.pop_back();
  inter.push_back(temp2);
 }

 sort(inter.begin(), inter.end());

 int final = inter[k - 1];

 string answerStr = to_string(final);

 return answerStr;
}

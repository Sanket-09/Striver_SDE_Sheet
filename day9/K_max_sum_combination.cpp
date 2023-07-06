using namespace std;
#include <bits/stdc++.h>
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k)
{
 priority_queue<int> pq;
 vector<int> ans(k);

 for (int i = 0; i < n; i++)
  for (int j = 0; j < n; j++)
   pq.push(a[i] + b[j]);
 for (int i = 0; i < k; i++)
 {
  ans[i] = pq.top();
  pq.pop();
 }
 return ans;
}
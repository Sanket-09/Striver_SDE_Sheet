using namespace std;
#include <bits/stdc++.h>

bool compare(vector<int> &a, vector<int> &b)
{
 return a[1] > b[1];
}
int jobScheduling(vector<vector<int>> &jobs)
{
 // Write your code here
 sort(jobs.begin(), jobs.end(), compare);
 int size = jobs.size();

 int profit = 0;
 int maxi = jobs[0][0];
 for (int i = 0; i < size; i++)
 {
  maxi = max(maxi, jobs[i][0]);
 }

 vector<int> slot(maxi + 1, -1);

 for (int i = 0; i < size; i++)
 {
  int d = jobs[i][0];

  for (int j = d; j > 0; j--)
  {
   if (slot[j] == -1)
   {
    slot[j] = jobs[i][1];
    break;
   }
  }
 }

 for (int i = 1; i <= maxi; i++)
 {
  if (slot[i] != -1)
  {
   profit += slot[i];
  }
 }
 return profit;
}

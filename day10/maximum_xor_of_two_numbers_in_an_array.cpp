#include <bits/stdc++.h>
using namespace std;

int maximumXor(vector<int> A)
{
 // Write your code here.
 int size = A.size();

 int ans = 0;

 for (int i = 0; i < size; i++)
 {
  int temp = 0;

  for (int j = i + 1; j < size; j++)
  {
   temp = A[i] ^ A[j];
   ans = max(ans, temp);
  }
 }

 return ans;
}
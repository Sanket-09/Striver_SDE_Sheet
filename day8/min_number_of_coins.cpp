#include <bits/stdc++.h>
using namespace std;

int findMinimumCoins(int amount)
{
 // Write your code here
 int v[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};

 int i = 0;
 int count = 0;

 while (v[i] > amount)
 {
  i++;
 }

 while (amount != 0)
 {
  if (v[i] <= amount)
  {
   amount = amount - v[i];
   count++;
  }

  else
   i++;
 }

 return count;
}

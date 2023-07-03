#include <bits/stdc++.h>
using namespace std;

bool solver(vector<int> &arr, int target, int n, int count)
{
 if (target == 0 && count == 4)
 {
  return true;
 }
 if (n < 0 || count > 4)
 {
  return false;
 }
 bool take = solver(arr, target - arr[n], n - 1, count + 1);
 bool notTake = solver(arr, target, n - 1, count);
 return take || notTake;
}

string fourSum(vector<int> arr, int target, int n)
{
 // Write your code here.
 if (solver(arr, target, n - 1, 0))
 {
  return "Yes";
 }
 return "No";
}
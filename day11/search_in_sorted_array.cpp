using namespace std;
#include <bits/stdc++.h>
int search(int *arr, int n, int key)
{
 // Write your code here.
 // if(key>arr[n])
 // return -1;

 int low = 0;
 int high = n - 1;
 int mid;

 while (low <= high)
 {
  mid = (low + high) / 2;

  if (key == arr[mid])
   return mid;

  if (arr[low] <= arr[mid])
  {
   if (key >= arr[low] && key < arr[mid])
    high = mid - 1;

   else
    low = mid + 1;
  }

  else
  {
   if (key > arr[mid] && key <= arr[high])
    low = mid + 1;

   else
    high = mid - 1;
  }
 }

 return -1;
}
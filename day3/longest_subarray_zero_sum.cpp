#include <bits/stdc++.h>
using namespace std;

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here

  unordered_map<int, int> m;

  int maxi =0;
  int sum =0;
  for(int i=0;i<arr.size();i++)
  {
      sum = sum + arr[i];
      if(sum ==0)
      {
        maxi = i+1;

      }
      else
      {
           if(m.find(sum) !=m.end())
           {
             maxi =max(maxi, i-m[sum]);
           }
           else
           {
             m[sum] = i;

           }
      }
  }

  return maxi;

}


/* 
Naive Answer

#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  int sum = 0;
  int ans = 0;
  int temp = 0;
  int n = arr.size();
  
  if(n==1)
  {
    if(arr[0] == 0)
    return 1;
    
    else return 0;
  }

  for(int i = 0; i<n; i++)
  {
    for(int j = i; j<n; j++)
    {
      sum+=arr[j];

      if(sum==0)
      temp = j-i+1;

      ans = max(temp,ans);     
    }
    sum=0;
  }

  return ans;

}





*/
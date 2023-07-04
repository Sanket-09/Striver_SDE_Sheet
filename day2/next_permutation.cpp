#include <bits/stdc++.h> 
using namespace std;

// void swap( int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

vector<int> nextPermutation(vector<int> &permutation, int n)
{   

    if(n==1)
    return permutation;

    int breakpoint = -1; 

    for(int i=n-2 ; i>=0 ; i--)
    {
        if(permutation[i] < permutation[i+1])
        {
            breakpoint = i;
            break;
        }
    }

    if (breakpoint == -1) {
      reverse(permutation.begin(), permutation.end());
      return permutation;
    }

    for(int i = n-1; i>=breakpoint ; i--)
    {
      if (permutation[i] > permutation[breakpoint]) {
        swap(permutation[i], permutation[breakpoint]);
        break;
      }
    }


    reverse(permutation.begin()+breakpoint+1 , permutation.end());
    return permutation;
}
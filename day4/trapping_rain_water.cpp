#include <bits/stdc++.h> 
using namespace std;

long getTrappedWater(long *arr, int n){
    // Write your code here.
    long prefix[n]={0};
    long suffix[n]={0};
    long res=0;
    
    prefix[0] = arr[0];
    for(long i = 1; i<n ; i++)
    {
        prefix[i] = max(arr[i],prefix[i-1]);
    }
    
    suffix[n-1] = arr[n-1];
    for(long i = n-2; i>=0 ; i--)
    {
        suffix[i] = max(arr[i], suffix[i+1]);
    }

    long ans[n] = {0};

    for(int i = 0; i<n ; i++)
    {
        ans[i] = min(prefix[i], suffix[i]) - arr[i];
        res += ans[i];
    }

    return res;
    
}
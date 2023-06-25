#include <bits/stdc++.h>
using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	sort(arr.begin(), arr.end());  

    int repeating = -1;
    int missing = -1;

    for (int i = 0; i < n - 1; i++) 
	{
        if(arr[i] == arr[i + 1]) 
		{
            repeating = arr[i];  
        } 
		
		else if (arr[i] + 1 != arr[i + 1]) 
		{
            missing = arr[i] + 1;  
        }
    }

	if (arr[0] != 1) 
	{
        missing = 1;
    } 
	
	else if (arr[n - 1] != n) 
	{
        missing = n;
    }

	return{missing,repeating};

	
}

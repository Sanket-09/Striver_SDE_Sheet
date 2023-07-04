#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(int arr[], int n) 
{
	int bar = n/2;
	int ans = -1;

	unordered_map<int ,int> m;

	for(int i = 0; i<n ; i++)
	{
		m[arr[i]]++;
	}

	for(auto pr : m)
	{
		if(pr.second > bar)
		{
			ans = pr.first;
		}
	}

	return ans;
}
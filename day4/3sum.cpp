#include <bits/stdc++.h> 
using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans;
	 
	for(int i = 0; i<n-2; i++)
	{
		int l = i+1;
		int r = n-1;

		while(l<r)
		{
			int sum = arr[i]+arr[l]+arr[r];

			if(sum==K)
			{
			vector<int> temp = {arr[i],arr[r],arr[l]};
			ans.push_back(temp);
			r--;
			l++;

			while(l<n && arr[l]==arr[l-1])
			l++;

			while(r>i && arr[r] == arr[r+1])
			r--;
			
			}

			else if(sum>K)
			r--;

			else if(sum<K) 
			l++;

		}

		while(i<n-1 && arr[i]==arr[i+1])
		i++;
   		
	}

	return ans;
}
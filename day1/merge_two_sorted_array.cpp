#include <bits/stdc++.h>
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) 
{	
	int mergeIndex = m + n - 1;
    int p1 = m - 1;
    int p2 = n - 1;

    while (p1 >= 0 && p2 >= 0) {
        if (arr1[p1] > arr2[p2]) {
            arr1[mergeIndex] = arr1[p1];
            p1--;
        } else {
            arr1[mergeIndex] = arr2[p2];
            p2--;
        }
        mergeIndex--;
    }

    while (p2 >= 0) {
        arr1[mergeIndex] = arr2[p2];
        p2--;
        mergeIndex--;
    }

    return arr1;
}
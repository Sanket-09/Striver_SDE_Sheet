#include <bits/stdc++.h> 
using namespace std;

bool searchMatrix(vector<vector<int>>& mat, int target) 
{
    int rows = mat.size();
    int columns = mat[0].size();

    int left = 0;
    int right = rows * columns - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int midElement = mat[mid / columns][mid % columns];

        if (midElement == target) 
        {
            return true;  // Found the target
        } 
        
        else if (midElement < target) 
        {
            left = mid + 1;  // Discard the left half
        } 
        
        else 
        {
            right = mid - 1;  // Discard the right half
        }
        
    }

    return false; 
         
}
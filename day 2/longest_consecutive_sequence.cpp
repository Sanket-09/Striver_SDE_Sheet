#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    int counter =1;
    int main_counter = 1;
    
    if(n==1)
    return 1;
    
    for(int i =1; i<n ; i++)
    {   
        if(arr[i] == arr[i-1])
        continue;
        
        if(arr[i] == arr[i-1]+1)
        {
        counter++;
        }

        else
        counter =1;

        main_counter = max(counter,main_counter);

        
        
       
    }
    
    return main_counter;
}
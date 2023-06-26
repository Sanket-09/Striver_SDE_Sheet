#include <bits/stdc++.h>
using namespace std;


vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> ans;
    int size = arr.size();
    int floor = size/3;

    unordered_map<int,int> m;

    for(int i = 0 ; i<size; i++)
    {
        m[arr[i]]++;
    }

    for(auto it : m)
    {
        if(it.second > floor)
        ans.push_back(it.first);
    }

    return ans;

    

}
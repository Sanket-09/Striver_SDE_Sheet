#include <bits/stdc++.h>
using namespace std;

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int n = arr.size();
    int temp = 0;
    int count = 0;


    for(int i = 0; i<n ;i++)
    {
        for(int j = i ; j<n ; j++)
        {
            temp = temp^arr[j];

            if(temp==x)
            count++;
        }
        temp =0;
    }

    return count;
}


/*
Optimised Solution

int subarraysXor(vector<int> &arr, int x)

{

unordered_map<int, vector<int>> valuesofxor;

int xorvalue = 0;

int temp=0;

int counter=0;

for(int i=0; i<arr.size(); i++){

xorvalue = xorvalue ^ arr[i];

if(xorvalue==x){

counter++;

}

temp = xorvalue ^ x;

if (valuesofxor.find(temp) != valuesofxor.end()) {

counter += valuesofxor[temp].size();

}

valuesofxor[xorvalue].push_back(i);

}

return counter;

}
*/
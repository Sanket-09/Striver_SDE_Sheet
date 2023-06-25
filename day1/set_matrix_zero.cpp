#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &m)
{
    int r=m.size();
    int c=m[0].size();
    vector<bool> row(r,false),col(c,false);

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(m[i][j]==0)
            {
                row[i]=true;
                col[j]=true;
                //marking the index of the bool vector true
            }
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(row[i]==true || col[j]==true)
            {
                m[i][j]=0;
            }
        }
    }
}
#include <bits/stdc++.h> 
using namespace std;

struct meeting
{
    int start;
    int end; 
    int pos;
};

bool comp(struct meeting m1, meeting m2)
{
    if(m1.end < m2.end) return true;
    if(m1.end > m2.end) return false;
    if(m1.pos < m2.pos) return false;
    
    return false;
}

vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    int n = start.size();
    
    struct meeting meet[n];
    
    for(int i = 0; i<n ; i++)
    {
        meet[i].start = start[i];
        meet[i].end = end[i];
        meet[i].pos = i+1;
    }

    sort(meet, meet+n , comp);
    
    vector<int> ans;
    
    int limit = meet[0].end;
    ans.push_back(meet[0].pos);
    
    for(int i = 0 ; i < n; i++)
    {
        if(meet[i].start > limit)
        {
            limit = meet[i].end;
            ans.push_back(meet[i].pos);
        }
    }
    
    return ans;
    
}
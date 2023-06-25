#include <bits/stdc++.h> 
using namespace std;

int maximumProfit(vector<int> &prices){
  int n = prices.size();
  if(n == 0) 
  {
    return 0;
  }

  int minPrice = prices[0];
  int maxProfit = 0;

  for(int i = 1; i < n; i++) 
    {
        if (prices[i] < minPrice) 
        {
            minPrice = prices[i];
        } 
        
        else 
        {
            int profit = prices[i] - minPrice;
            if (profit > maxProfit) 
            {
                maxProfit = profit;
            }
        }
    }

 return maxProfit;
}


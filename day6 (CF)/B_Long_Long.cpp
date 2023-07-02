#include <bits/stdc++.h>
using namespace std;
int main()
{
 int tt;
 cin >> tt;
 while (tt--)
 {
  int n, c = 0;
  cin >> n;
  long long sum = 0;
  int a[n];
  for (int i = 0; i < n; i++)
  {
   cin >> a[i];
   sum += abs(a[i]);
  }
  for (int i = 0; i < n; i++)
  {
   if (a[i] < 0)
    c++;
   else
    continue;
   while (a[i] <= 0 && i < n)
    i++;
  }
  cout << sum << " " << c << endl;
 }
}
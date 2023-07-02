#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
const int N = 1e5 + 500;
void solve()
{
 int t, n, k, s, a[N];

 cin >> n >> k;
 s = 0;
 for (int i = 0; i < 3; ++i)
 {
  for (int j = 1; j <= n; ++j)
   cin >> a[j];
  for (int j = 1; j <= n; ++j)
  {
   if ((a[j] | k) == k)
    s |= a[j];
   else
    break;
  }
 }
 cout << (s == k ? "Yes" : "No") << endl;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
#ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
#endif

 ll test = 1;
 cin >> test;
 while (test--)
 {
  solve();
 }
 return 0;
}

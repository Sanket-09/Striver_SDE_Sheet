#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
 int n, m, cnt = 0;
 cin >> n >> m;
 while (n < m)
 {
  if (m % 2)
   m++;
  else
   m = m / 2;
  cnt++;
 }
 cnt = cnt + n - m;
 cout << cnt << "\n";
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

 solve();

 return 0;
}

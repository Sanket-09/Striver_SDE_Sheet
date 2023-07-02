#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
 int n, i, c = 0, a[200000];
 cin >> n;
 for (i = 0; i < n; i++)
  cin >> a[i];
 sort(a, a + n);
 for (i = 0; i < n / 2; i++)
  c += a[n - i - 1] - a[i];
 cout << c << endl;
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

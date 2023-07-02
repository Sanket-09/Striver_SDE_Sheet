#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
 int n;
 cin >> n;
 vector<ll> v;
 for (ll i = 0; i < n; i++)
 {
  ll k;
  cin >> k;
  v.push_back(k);
 }

 sort(v.begin(), v.end());
 ll a1 = v[n - 5] * v[n - 4] * v[n - 3] * v[n - 2] * v[n - 1];
 ll a2 = v[0] * v[n - 4] * v[n - 3] * v[n - 2] * v[n - 1];
 ll a3 = v[0] * v[1] * v[n - 3] * v[n - 2] * v[n - 1];
 ll a4 = v[0] * v[1] * v[2] * v[n - 2] * v[n - 1];
 ll a5 = v[0] * v[1] * v[2] * v[3] * v[n - 1];
 ll a6 = v[0] * v[1] * v[2] * v[3] * v[4];
 ll ans = max(a1, max(a2, max(a3, max(a4, max(a5, a6)))));

 cout << ans << endl;
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

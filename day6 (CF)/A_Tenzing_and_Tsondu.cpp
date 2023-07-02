#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
 ll int a, b, p1 = 0, p2 = 0, k;
 cin >> a >> b;
 for (int i = 0; i < a; i++)
  cin >> k, p1 += k;
 for (int i = 0; i < b; i++)
  cin >> k, p2 += k;
 cout << (p1 > p2 ? "Tsondu" : (p1 == p2 ? "Draw" : "Tenzing")) << endl;
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

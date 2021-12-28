#include <iostream>
#include <map>
#include <set>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    map<int, bool> v;
    int n;
    cin >> n;
    sort(a, a + n);
    int a[n];
    for (auto &x : a)
      cin >> x;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
      if (a[i] != a[i - 1])
        ans++;
    }
    cout << ans;
  }
}
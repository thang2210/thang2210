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
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
      cin >> x;
    sort(a, a + n);
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
      if (a[i] != a[i - 1])
        ans++;
    }
    cout << ans;
  }
}
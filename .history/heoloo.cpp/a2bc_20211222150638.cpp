#include <iostream>
#include <set>
#include <map>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (auto &x : a)
      cin >> x;
    map<int, bool> v;
    for (int i = 0; i < m; i++)
    {
      int x;
      cin >> x;
      v[x] = true;
    }
    bool kt = false;
    for (auto p : a)
    {
      int x;
      cin >> x;
      if (v.count(x) == v.end())
      {
        cout << v << endl;
        kt = true;
      }
    }
  }
}
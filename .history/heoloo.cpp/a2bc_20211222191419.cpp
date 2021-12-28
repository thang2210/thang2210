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
    set<int> v;
    for (int i = 0; i < m; i++)
    {
      int x;
      cin >> x;
      v.insert(x);
    }
    bool kt = false;
    for (auto x : a)
    {
      if (v.count(x) == v.end())
      {
        cout << x << endl;
        kt = true;
      }
    }
    if (!kt)
      cout << "not found";
  }
}
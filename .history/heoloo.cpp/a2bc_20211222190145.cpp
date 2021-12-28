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
    int n;
    cin >> n;
    set<int> v;
    int a[n];
    for (auto &x : a)
    {
      int p;
      cin >> p;
      v.insert(x);
    }
    int q;
    cin >> q;
    while (q--)
    {
      int x;
      cin >> x;
      if (v.find(x) == v.end())
        cout << "1";
      else
        cout << "no";
    }
  }
}
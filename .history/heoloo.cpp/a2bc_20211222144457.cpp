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
    map<int, bool> v;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      v[x] = true;
    }
    int q;
    cin >> q;
    while (q--)
    {
      int x;
      cin >> x;
      if (v.count(x) = 1)
        cout << "1";
      else
        cout << "no";
    }
  }
}
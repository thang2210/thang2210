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
      if (v.count(x) == 1)
        cout << "yes";
      else
        cout << "no";
    }
  }
}
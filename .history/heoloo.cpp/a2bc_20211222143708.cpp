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
    for (auto x : a)
    {
      int x;
      cin >> x;
      v.insert(x);
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
  return 0;
}
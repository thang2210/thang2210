#include <iostream>
#include <set>
#include <map>
#include <bits/stdc++.h>
using namespace std;
// on lia set vs map , buoi cuoi :
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    set<int> v;
    int a[n], b[m];
    for (auto &x : a)
      cin >> x;
    for (int i = 0; i < m; i++)
    {
      int x;
      cin >> x;
      v.insert(x);
    }
    bool kt = false;
    for (auto x : a)
    {
      if (v.find(x) == v.end())
      {
        cout << x << " ";
        kt = true;
      }
    }
  }
  return 0;
}
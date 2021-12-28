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
      int q;
      cin >> q;
      while (q--)
      {
        int p;
        cin >> p;
        if (binary_sreach(a, a + n, x))
          cout << "yes";
        else
          cout << "no";
      }
    }
  }
}
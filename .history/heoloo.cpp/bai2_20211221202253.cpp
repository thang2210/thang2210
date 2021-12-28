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
    for (auto &m : a)
      cin >> a;
    sort(a, a + n);
    int q;
    cin >> q;
    while (q--)
    {
      int x;
      cin >> x;
      if (binary_search(a, a + n, x))
        cout << "yes";
      else
        cout << "no";
    }
  }
}
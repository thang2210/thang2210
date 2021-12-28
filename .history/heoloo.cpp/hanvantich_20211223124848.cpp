#include <iostream>
#include <set>
#include <map>
#include <bits/stdc++.h>
using namespace std;
// on lia set vs map , buoi cuoi :
int main()
{
  // dem so luong khac nhau phan tu giua 2 mang so nguyen
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    set<int> v;
    int a[n];
    for (auto p : a)
    {
      int x;
      cin >> x;
      v.insert(x);
    }
    int q;
    cin >> q;
    while (q--)
    {
      if (v.count(x) == 1)
        cout << "yes";
      else
        cout << "no";
    }
  }
  return 0;
}
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
    map<int, bool> v;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      v[x] = true;
    }
    cout << v.size() << endl;
  }
  return 0;
}
#include <iostream>
#include <math.h>
#include <string.h>
#include <set>
#include <map>
#include <bits/stdc++.h>
#include <algorithm>
// bai 1 :
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
    int a[n];
    for (auto p : a)
    {
      int x;
      cin >> x;
      v[x] = true;
    }
    cout << v.size() << endl;
  }
}
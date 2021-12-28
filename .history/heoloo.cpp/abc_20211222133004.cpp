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
    set<int> v;
    int n;
    cin >> n;
    int a[n];
    for (auto x : a)
    {
      int x;
      cin >> x;
      v.insert(x);
    }
    cout << v.size() << endl;
  }
}
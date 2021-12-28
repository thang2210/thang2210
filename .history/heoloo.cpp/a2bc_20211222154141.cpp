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
    int a[1000];
    map<int, int> v;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      v[a[i]]++;
    }
    int res;
    int fre = 0;
    for (auto mp : v)
    {
      if (mp.second > fre)
      {
        fre = mp.second;
        res = mp.first;
      }
      cout << res;
    }
  }
}
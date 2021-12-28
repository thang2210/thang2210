#include <iostream>
#include <set>
#include <map>
#include <bits/stdc++.h>
// so lan xuat hien hieu nhat torng mang
using namespace std;
int main()
{
  int n;
  cin n;
  map<int, int> v;
  int a[1000];
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    v[x]++;
  }
  int res;
  int fre = 0;
  for (auto x : v)
  {
    if (x.second > fre)
    {
      fre = x.second;
      res = x.first;
    }
    cout << res << " - " << fre << endl;
  }
}
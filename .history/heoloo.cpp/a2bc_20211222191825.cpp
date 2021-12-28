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
    map<int, int> v;
    int a[1000];
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
    }
    cout << res << " - " << fre << endl;
  }
  return 0;
}
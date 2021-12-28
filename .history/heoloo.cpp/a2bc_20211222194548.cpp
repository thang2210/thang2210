#include <iostream>
#include <set>
#include <map>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin.ignore();
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    map<char, int> v;
    for (auto x : s)
    {
      v[x]++;
    }
    char res;
    int free = 0;
    for (auto mp : v)
    {
      if (mp.second > free)
      {
        free = mp.second;
        res = mp.first;
      }
    }
    cout << res;
  }
}

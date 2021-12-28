#include <iostream>
#include <set>
#include <map>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  cin.ignore();
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
    int fre = 0;
    for (auto mp : v)
    {
      if (mp.second > fre)
      {
        fre = mp.second;
        res = mp.first;
      }
    }
    cout << res;
  }
}

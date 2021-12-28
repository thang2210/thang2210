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
    string s;
    getline(cin, s);
    set<string> v;
    for (auto x : s)
    {
      string s;
      cin >> s;
      v.insert(tolower(s));
    }
    for (auto mp : v)
    {
      if (v.count(mp) == 26)
        cout << "1";
      else
        cout << "no";
    }
  }
}
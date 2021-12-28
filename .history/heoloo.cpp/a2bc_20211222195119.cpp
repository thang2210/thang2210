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
      string x;
      cin >> x;
      v.insert(tolower(x));
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
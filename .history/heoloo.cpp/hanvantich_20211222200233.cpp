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
    set<string> v;
    for (auto x : s)
    {
      v.insert(x);
    }
    if (v.size() == 26)
      cout << "ok";
    else
      cout << "no";
  }
}
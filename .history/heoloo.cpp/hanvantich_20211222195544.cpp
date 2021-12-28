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
    getline(cin, s);
    set<char> v;
    for (auto x : s)
    {
      v.insert(tolower(x));
    }
    if (v.size() == 26)
      cout << "1";
    else
      cout << "no";
  }
}
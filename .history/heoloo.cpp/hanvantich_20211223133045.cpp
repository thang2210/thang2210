#include <iostream>
#include <set>
#include <map>
#include <bits/stdc++.h>
using namespace std;
// on lia set vs map , buoi cuoi :
int main()
{

  int t;
  cin.ignore();
  cin >> t;
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
      cout << "yes";
    else
      cout << " no";
  }
}
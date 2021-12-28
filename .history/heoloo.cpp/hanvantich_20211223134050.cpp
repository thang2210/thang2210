#include <iostream>
#include <set>
#include <map>
#include <bits/stdc++.h>
using namespace std;
// on lia set vs map , buoi cuoi :
int main()
{
  string s;
  getline(cin, s);
  set<string> v;
  stringstream ss(s);
  string wok;
  while (ss >> wok)
  {
    v.insert(wok);
  }
  cout << v.size() << endl;
}
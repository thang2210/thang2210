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
  map<string, int> v;
  stringstream ss(s);
  string wok;
  while (ss >> wok)
  {
    v[wok]++;
  }
  string res;
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
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
    int cnt[26] = {0};
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
    cout << res << endl;
  }
  return 0;
}
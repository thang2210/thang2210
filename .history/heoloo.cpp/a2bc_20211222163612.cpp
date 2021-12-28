#include <iostream>
#include <set>
#include <map>
#include <bits/stdc++.h>
// so lan xuat hien hieu nhat torng mang
using namespace std;
int main()
{
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {
    string s;
    getline(cin, s);
    int cnt[26] = {0};
    map<string, int> v;
    stringstream ss(s);
    string wok;
    while (ss >> wok)
    {
      v[wok]++;
    }
    char res;
    int fre = 0;
    for (auto x : v)
    {
      if (x.second > fre)
      {
        fre = x.second;
        res = x.first;
      }
    }
    cout << res;
  }
}
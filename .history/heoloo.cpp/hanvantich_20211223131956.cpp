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
    getline(cin, s);
    int cnt[26] = {0};
    for (auto x : s)
    {

      cnt[x]++;
    }
    char res;
    int fre = 0;
    for (auto x : s)
    {
      if (cnt[x] > fre)
      {
        fre = cnt[i];
        res = (char)(i);
      }
    }
    cout << (char)(res) << endl;
  }
  return 0;
}
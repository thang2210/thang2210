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

    for (auto &x : s)
    {
      cnt[x]++;
    }
    char res;
    int ffre = 0;
    for (int i = 0; i < 256; i++)
    {
      if (cnt[i] > ffre)
      {
        ffre = cnt[i];
        res = (char)(i);
      }
    }
    cout << (char)(res) << endl;
  }
  return 0;
}
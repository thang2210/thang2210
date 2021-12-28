#include <iostream>
#include <set>
#include <map>
#include <bits/stdc++.h>
using namespace std;
// dem tu khac nhau trong cau
int main()
{
  int t;
  cin.ignore();
  cin >> t;
  while (t--)
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
    cout << v.size() << endl;
  }
  return 0;
}
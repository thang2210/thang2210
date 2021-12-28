#include <iostream>
#include <set>
#include <map>
#include <bits/stdc++.h>
using namespace std;
// dem tu khac nhau trong cau
int main()
{
  string s;
  getline(cin, s);
  cin.ignore();
  set<int> n;
  stringstream ss(s);
  string wok;
  while (ss >> wok)
  {
    n.insert(wok);
  }
  cout << n.size() << endl;
}
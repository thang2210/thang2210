#include <iostream>
#include <set>
#include <map>
#include <bits/stdc++>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    set<int> v;
    for (auto &x : a)
    {
      int x;
      cin >> x;
      v.insert(x);
    }
    cout << v.size() << endl;
  }
}
#include <iostream>
#include <set>
#include <map>
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
    map<int, bool> v;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      v[x] = true;
    }
    int q;
    cin >> q;
    while (q--)
    {
      int ok = 0;
      for (auto x : a)
      {
        if (v.count(x) == 1)
        {
          cout << "1";
          ok = 1;
        }
        else
        {
          cout << "np";
        }
      }
    }
  }
}
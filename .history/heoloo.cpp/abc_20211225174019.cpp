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
    set<int> v;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      v.insert(x);
    }
    int q;
    cin >> q;
    while (q--)
    {
      for (auto x : a)
      {
        if (v.find(x) == 1)
          cout << "yes";
        else
          cout << "no";
      }
    }
  }
}
}
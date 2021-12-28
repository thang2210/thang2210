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
    cout << v.size() << endl;
  }
}
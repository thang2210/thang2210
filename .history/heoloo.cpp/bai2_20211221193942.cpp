#include <iostream>
#include <map>
#include <set>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    map<int, bool> v int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      v.insert(x) = true;
    }
    cout << v.size() << endl;
  }
}
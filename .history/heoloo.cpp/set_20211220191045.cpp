#include <iostream>
#include <set>
using namespace std;
int main()
{
  set<int> v;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    v.insert(x);
  }
  cout << v.size() << endl;
  return 0;
}
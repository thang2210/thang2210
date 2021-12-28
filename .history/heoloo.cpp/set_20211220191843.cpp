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
  cout << *v.begin() << endl; // truy cap den phan tu cuoi cung
  cout << *v.rbegin() << endl;
  return 0;
}
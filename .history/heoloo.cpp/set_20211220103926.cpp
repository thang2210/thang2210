#include <iostream>
#include <set>
using namespace std;
int main()
{
  set<int> v;
  for (int i = 0; i < 10; i++)
  {
    v.insert(i);
  }
  for (auto x : v)
  {
    cout << x;
  }
  v.erase(7);
  for (auto x : v)
  {
    cout << x;
  }
}
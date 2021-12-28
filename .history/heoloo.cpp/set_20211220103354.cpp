#include <iostream>
#include <set>
using namespace std;
int main()
{
  set<int> v;
  v.insert(100);
  v.insert(200);
  v.insert(300);
  for (int i = 0; i < 10; i++)
  {
    v.insert(i);
  }
  cout << v.size() << endl;
  if (s.count(5) != 0)
  {
    cout << "co";
  }
  else
    cout << "no";
}
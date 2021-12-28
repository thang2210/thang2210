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
  cout << v.size() << endl;
  if (v.find(200) != v.end())
  {
    cout << "co";
  }
  else
    cout << "no";
}
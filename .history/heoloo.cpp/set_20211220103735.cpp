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
  v.erase(5);
  cout << v.size() << endl;
}
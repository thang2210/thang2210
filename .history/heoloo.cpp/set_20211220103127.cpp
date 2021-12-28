#include <iostream>
#include <set>
using namespace std;
int main()
{
  set<int> v;
  v.insert(100);
  v.insert(200);
  v.insert(300);
  cout << v.size();
}
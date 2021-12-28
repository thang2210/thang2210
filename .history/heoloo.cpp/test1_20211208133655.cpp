// BAI 3 :
#include <iostream>
using namespace std;
int main()
{
  int n, x;
  cin >> n >> x;
  int a[1000];
  for (auto &x : a)
  {
    cin >> x;
  }
  // kiem tra x co trong mang hay khong?
  for (int i = 0; i < n; i++)
  {
    if (a[i] == x)
    {
      a[i] = x;
    }
  }
  return 0;
}
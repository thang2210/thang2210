#include <iostream>

// bai 1 :
using namespace std;
int so_dem(int n)
{
  int s1 = 0, s9 = 0;
  while (n)
  {
    int r = n % 10;
    if (r == 1)
      s1++;
    else if (r == 9)
      s2++;
    n /= i;
  }
  return s1 && s9;
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  for (int i = 0; i < n; i++)
  {
    if (so_dem(a[i]))
    {
      cout << a[i];
    }
  }
}
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
// dem tan xuat cua 1 so xuat hien o trong mang
int main()
{
  int n;
  cin >> n;
  int a[1000], b[1000];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int max = a[0];
  for (int i = 0; i < n; i++)
  {
    if (max < a[i])
      max = a[i];
  }
  for (int i = 0; i <= max; i++)
  {
    b[i] = 0;
  }
  for (int i = 0; i < n; i++)
  {
    b[a[i]] += 1;
  }
  for (int i = 0; i <= max; i++)
  {
    if (b[i] >= 0)
    {
      cout << i << " _ " << b[i] << endl;
    }
  }
  return 0;
}
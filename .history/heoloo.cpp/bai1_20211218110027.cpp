
// tim so cahn trong mang nho nhat
#include <iostream>
using namespace std;
int min(int a[1000], int n)
{
  int min = a[0];
  for (int i = 0; i < n; i++)
  {
    if (min > a[i])
    {
      a[i] = min;
    }
  }
  return min;
}
int pt(int a[1000], int n)
{
  int d = min(a, n);
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0)
    {
      cout << d;
    }
  }
}
int main()
{
  int n;
  cin >> n;
  int a[1000];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  pt(a, n);
}
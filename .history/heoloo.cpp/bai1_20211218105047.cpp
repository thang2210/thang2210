
// tim so cahn trong mang nho nhat
#include <iostream>
using namespace std;
int sochan(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0)
    {
      for (int i = 0; i < n; i++)
      {
        if (min > a[i])
          min = a[i];
      }
    }
    return min;
  }
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  sochan(a, n);
}
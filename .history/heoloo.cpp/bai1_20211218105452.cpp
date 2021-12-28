
// tim so cahn trong mang nho nhat
#include <iostream>
using namespace std;
int sochan(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0)
    {
      int min = a[0];
      for (int i = 0; i < n; i++)
      {
        if (a[i] < min)
          min = a[i];
        return min;
      }
    }
    return 0;
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
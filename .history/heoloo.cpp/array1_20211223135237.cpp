#include <iostream>
// bai 1 :
using namespace std;
int max(int a[], int n)
{
  int max = a[0];
  for (int i = 0; i < n; i++)
  {
    if (max < a[i])
    {
      a[i] = max;
    }
  }
  return max;
}
int min(int a[], int n)
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
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  cout << max(a, n) << " - " << min(a, n);
}
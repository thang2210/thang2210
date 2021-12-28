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
      max = a[i];
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
      min = a[i];
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
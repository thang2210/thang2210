#include <iostream>

// bai 1 : kiem tra mang doi xung
using namespace std;
/*int pt(int a[], int n)
{
  int l = 0, r = n - 1;
  while (l < r)
  {
    if (a[l] != a[r])
      return 0;
    l++;
    r--;
  }
  return 1;
} */

// bai 2 : kt mang tang dan hay giam dan
int pt(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (a[i] < a[i + 1])
      return 1;
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
  if (pt(a, n))
    cout << "yes";
  else
    cout << "no";
}
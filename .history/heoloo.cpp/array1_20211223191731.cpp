#include <iostream>

// bai 1 : kiem tra mang doi xung
using namespace std;
int pt(int a[n], int n)
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
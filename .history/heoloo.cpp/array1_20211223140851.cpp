#include <iostream>

// bai 1 :
using namespace std;
int pt(int a[], int n, int chi_so)
{
  // chi so lon nhat trong mang
  int max = a[0];
  for (int i = 0; i < n; i++)
  {
    if (max < a[i])
    {
      max = a[i];
      chi_so = i;
    }
  }
  cout << chi_so;
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  pt(a, n, chi_so);
}
#include <iostream>

// bai 1 :
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  for (int i = 0; i < n; i++)
  {
    if (a[i] * a[i - 1] < 0 || a[i] * a[i + 1] < 0)
    {
      cout << a[i] << " ";
    }
  }
}
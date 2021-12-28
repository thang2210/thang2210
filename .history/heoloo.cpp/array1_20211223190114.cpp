#include <iostream>

// bai 1 :
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> a[i];
  int max1 = 0, max2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > max1)
    {
      max2 = max1;
      max1 = a[i];
    }
    else if (a[i] > max2)
    {
      max2 = a[i];
    }
  }
  if (a[i] < max2)
    cout << a[i] << endl;
}
#include <iostream>

// bai 1 :
using namespace std;
int tach(int n)
{
  while (n)
  {
    int r = n % 10;
    if (r % 2 == 0)
      return 0;
    n /= 10;
  }
  return 1;
}
int pt(int a[], int n)
{
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 1 && tach(i))
    {
      cout << a[i] << " ";
      count++;
    }
  }
  cout << count;
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  int index;
  for (auto &x : a)
    cin >> x;
  pt(a, n);
}
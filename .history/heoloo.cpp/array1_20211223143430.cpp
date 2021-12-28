#include <iostream>

// bai 1 :
using namespace std;
int pt(int a[], int n)
{
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 1)
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
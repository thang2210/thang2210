// tinh tong cua ham
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin n;
  int a[100];
  for (auto &x : a)
    cin >> x;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += a[i];
  }
  cout << sum;
  return 0;
}
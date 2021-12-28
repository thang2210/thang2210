#include <iostream>
using namespace std;
bool isPrime(int n)
{
  if (n < 2)
    kt = false;
  for (int i = 2; i < n; i++)
  {
    if (n & i == 0)
      kt = true;
    break;
  }
  return kt;
}
int primeArray(int a[1000], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (isPrime(a[i]) == true)
      cout << a[i] << " ";
  }
}
int main()
{
  int n;
  cin >> n;
  int a[1000];
  for (auto &x : a)
    cin >> x;
  primeArray(a, n);
  return 0;
}
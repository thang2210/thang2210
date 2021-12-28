/*#include <iostream>
using namespace std;
bool isPrime(int n)
{
  bool kt = true;
  if (n < 2)
    kt = false;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      kt = false;
      break;
    }
  }
  return kt;
}
int primeArray(int a[1000], int n)
{
  for (int i = 0; i <= n; i++)
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
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  primeArray(a, n);
  return 0;
} */

// tong cac phan tu le k am
#include <iostream>
using namespace std;
int sumArray(int a[1000], int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 != 0 && a[i] > 0)
    {
      sum += a[i];
      cout << a[i] << " ";
    }
  }
  cout << "tong cac phan tu chan se la : " << sum;
}
int main()
{
  int n;
  cin >> n;
  int a[1000];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sumArray(a, n);
  return 0;
}
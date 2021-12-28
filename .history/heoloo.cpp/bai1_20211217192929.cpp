#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int snt(int n)
{
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
      return 0;
  }
  return n > 1;
}
int isTang(int n)
{
  while (n >= 10)
  {
    int r = n % 10;
    if (r <= (n / 10) % 10)
      return 0;
    n /= 10;
  }
  return 1;
}
int isGiam(int n)
{
  while (n >= 10)
  {
    int r = n % 10;
    if (r >= (n / 10) % 10)
      return 0;
    n /= 10;
  }
  return 1;
}
int main()
{
  int n;
  cin >> n;
  int count;
  for (int i = pow(10, n - 1); i <= pow(10, n); i++)
  {
    if ((isTang(i) || isGiam(i)) && snt(i))
      count++;
  }
  cout << count;
}
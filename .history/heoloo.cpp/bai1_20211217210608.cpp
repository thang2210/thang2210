#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int tach(int n)
{
  int count = 0;
  while (n)
  {
    count++;
    n /= 10;
  }
  return count;
}
int astrong(int n)
{
  int res = 0, m = n;
  int d = tach(n);
  while (n)
  {
    res += (int)pow(n % 10, d);
    n /= 10;
  }
  return res == m;
}
int main()
{
  int n;
  cin >> n;
  if (astrong(n))
    cout << "yes";
  else
    cout << "no";
}
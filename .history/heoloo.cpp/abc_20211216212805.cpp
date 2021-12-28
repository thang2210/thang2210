#include <iostream>
#include <math.h>
using namespace std;
// so smith
int sum(int n)
{
  int sum = 0;
  while (n)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
int check(int n)
{
  int sum1 = sum(n);
  int sum2 = 0;
  int temp = n;
  for (int i = 2; i <= sqrt(n); i++)
  {
    while (n % i == 0)
    {
      sum2 += sum(i);
      n /= i;
    }
  }
  if (temp == n)
    return 0;
  if (n != 1)
    sum2 += sum(n);
  return sum1 == sum2;
}
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    if (check(n))
      cout << "use";
    else
      cout << "o";
  }
}
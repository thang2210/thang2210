
//

// kiem tra so nguyen to
#include <iostream>
#include <math.h>
using namespace std;
int prime[1000001];
int snt(int n)
{
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
      return 0;
  }
  return n > 1;
}
int cnst(int n)
{
  while (n)
  {
    int r = n % 10;
    if (!(n == 2 || n == 3 || n == 5 || n == 7))
      return 0;
    n /= 10;
  }
  return 1;
}

int sumPrime(int n)
{
  int sum = 0;
  while (n)
  {
    sum += n % 10;
    n /= 10;
  }
  return snt(sum);
}
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = a; i <= b; i++)
    {
      if (snt(i) && cnst(i) && sumPrime(i))
      {
        count++;
      }
    }
    cout << count;
  }
}
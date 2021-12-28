#include <iostream>
#include <math.h>
using namespace std;
// so smith

int check(int n)
{
  for (int i = 2; i <= sqrt(n); i++)
  {
    int count = 0;
    while (n % i == 0)
    {
      count++;
      n /= i;
    }
    if (count >= 2)
      return 1;
  }
  return 0;
}
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
      if (check(i))
      {
        cout << i << " ";
      }
    }
  }
}
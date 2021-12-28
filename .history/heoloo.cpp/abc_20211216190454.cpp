#include <iostream>
#include <math.h>
using namespace std;

int kt(int n)
{
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
      return 0;
  }
  return n > 1;
}
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    if (kt(n))
      cout << "yes";
    else
      cout << "no";
  }
}
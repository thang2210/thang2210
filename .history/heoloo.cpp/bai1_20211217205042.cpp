#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int solocphat(int n)
{
  while (n)
  {
    int r = n % 10;
    if (!(n == 0 || n == 6 || n == 8))
      return 0;
    n /= 10;
  }
  return 1;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    cout << solocphat(n);
  }
}
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int solocphay(int n)
{
  while (n)
  {
    int r = n % 10;
    if (!(r == 0 || r == 6 || r == 8))
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
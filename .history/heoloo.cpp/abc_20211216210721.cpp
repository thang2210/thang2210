#include <iostream>
#include <math.h>
using namespace std;

int check(int n, int p)
{
  int sum = 0;
  for (int i = p; i <= n; i *= p)
  {
    sum += n / i;
  }
  return sum;
}
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int n, p;
    cin >> n >> p;
    cout << check(n, p);
  }
}
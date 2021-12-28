#include <iostream>
#include <math.h>
using namespace std;
void pt(int n)
{
  for (int i = 2; i <= sqrt(n); i++)
  {
    while (n % i == 0)
    {
      cout << i;
      n /= i;
    }
  }
  if (n != 1)
    cout << n;
}
int main()
{
  int n;
  cin >> n;
  pt(n);
}
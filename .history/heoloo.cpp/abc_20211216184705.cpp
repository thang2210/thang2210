#include <iostream>
#include <math.h>
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
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
      if (snt(i))
      {
        cout << i << " ";
      }
    }
  }
}
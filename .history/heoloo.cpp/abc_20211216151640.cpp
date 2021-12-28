#include <iostream>
#include <math.h>
using namespace std;
int kiem_tra(int n)
{
  if (n < 2)
    return 0;
  int count = 0;
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      count++;
    }
  }
  if (count == 0)
    cout << "yes";
  else
    cout << "no";
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> t;
    cout << kiem_tra(n);
  }
}
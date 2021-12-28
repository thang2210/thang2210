#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int check(long long n)
{
  int sum = 0;
  while (n != 0)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    cout << check(i);
  }
}
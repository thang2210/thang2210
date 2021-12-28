#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int pow(int a, int b)
{
  int res = 1;
  for (int i = 1; i <= b; i++)
  {
    res *= a;
  }
  return res;
}
int main()
{
  int a, b;
  cin >> a >> b;
  cout << pow(a, b);
}
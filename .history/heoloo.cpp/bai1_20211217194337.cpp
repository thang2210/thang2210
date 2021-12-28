#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
void pt(int n)
{
  long long fibo[n];
  fibo[0] = 0;
  fibo[1] = 1;
  for (int i = 2; i <= n; i++)
  {
    fibo[i] = fibo[i - 1] + fibo[i - 2];
  }
}
int main()
{
  int n;
  cin >> n;
  if (pt(n))
    cout << "yes";
  else
    cout << "no";
}
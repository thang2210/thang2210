#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int pt(int n)
{
  int bibo[n];
  bibo[0] = 0;
  bibo[1] = 1;
  for (int i = 2; i <= n; i++)
  {
    bibo[i] = bibo[n - 1] + bibo[n - 2];
  }
  for (int i = 0; i < n; i++)
  {
    cout << bibo[i];
  }
}
int main()
{
  int n;
  cin >> n;
  cout << pt(n);
  return 0;
}
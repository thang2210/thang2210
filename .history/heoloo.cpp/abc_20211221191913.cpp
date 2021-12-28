#include <iostream>
#include <math.h>
#include <string.h>

// bai 1 :
using namespace std;
void ptArray(int a[][100], int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j)
      {
        sum += a[i][j];
      }
    }
    return sum;
  }
}

int main()
{
  int n;
  cin >> n;
  int a[][100];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; i < n; j++)
    {
      cin >> a[i][j];
    }
  }
  ptArray(a, n);
  return 0;
}
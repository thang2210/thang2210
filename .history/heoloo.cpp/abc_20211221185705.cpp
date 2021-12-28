#include <iostream>
#include <math.h>
#include <string.h>

// bai 1 :
using namespace std;
void ptArray(int a[100][100], int n, int m)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (i == j)
      {
        sum += a[i][j];
      }
    }
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cout << sum;
      }
    }
  }
}

int main()
{
  int n, m;
  cin >> n >> m;
  int a[100][100];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; i < m; j++)
    {
      cin >> a[i][j];
    }
  }
  ptArray(a, n, m);
  return 0;
}
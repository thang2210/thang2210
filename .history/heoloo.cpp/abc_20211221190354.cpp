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
        cout << a[i][j];
      }
    }
  }
}

int main()
{
  int n;
  cout << "nhap hanh : ";
  cin >> n;
  int m;
  cout << "nhap m : ";
  cin >> m;
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
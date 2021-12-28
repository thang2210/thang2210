// ---- MANG 2 CHIEU -------

#include <iostream>
#include <set>
#include <map>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
// Bài 1. Tính tổng các hàng của ma trận
int main()
{
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }
  int sum = 0;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      sum += a[i][];
    }
  }
  cout << sum;
}
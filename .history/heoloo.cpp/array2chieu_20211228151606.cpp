// ---- MANG 2 CHIEU -------

#include <iostream>
#include <set>
#include <map>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
// Bài 1. Tính tổng các hàng của ma trận
/*int main()
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
  for (int i = 0; i < m; i++)
  {
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
      sum += a[j][i];
    }
    cout << sum << endl;
  }
} */

// Bài 3. Tìm hàng có nhiều số nguyên tố nhất
// int snt(int n)
// {
//   for (int i = 2; i <= sqrt(n); i++)
//   {
//     if (n % i == 0)
//       return 0;
//   }
//   return n > 1;
// }
// int main()
// {
//   int n, m;
//   cin >> n >> m;
//   int a[n][m];
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//       cin >> a[i][j];
//     }
//   }
//   int res = 0, hang;
//   for (int i = 0; i < n; i++)
//   {
//     int cnt = 0; // dem so hang
//     for (int j = 0; j < m; j++)
//     {
//       if (snt(a[i][j]))
//         cnt++;
//     }
//     if (res >= cnt)
//     {
//       res = cnt;
//       hang = i;
//     }
//   }
// }

//
int main()
{
  int a, b;
  cin >> a >> b;
  if (a == 0)
    cout << "pt co nghiem ";
  else if (a == 0 && b == 0)
    cout << "pt vo so nhiem";
  else
  {
    cout << "pt co ngiem : " << -b / a << endl;
  }
}
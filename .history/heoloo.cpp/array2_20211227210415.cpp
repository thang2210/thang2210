// ---------PHẦN 2. CÁC BÀI TOÁN LIÊN QUAN TỚI SẮP XẾP VÀ TÌM KIẾM -----------
// ------------------------CODER : NGUYEN dINH tHANG ♥♥♥♥♥♥♥-----------------

#include <iostream>
#include <set>
#include <map>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
// khi muon a dung trc b theo tt ss thi ban tra ve so am
// khi ban muon a dung sau b se tra ve so duong
int cmp(const void *a, const void *b)
{
  int *x = (int *)a;
  int *y = (int)*b;
  if (*x < *y)
    return -1;
  return 1;
}

int main()
{
  int n;
  cin >> n;
  int a[1000];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  qsort(a, n, sizeof(int), cmp);
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
}
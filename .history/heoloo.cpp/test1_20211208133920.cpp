// BAI 3 :
#include <iostream>
using namespace std;
int rm(int a[1000], int n, int x)
{
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == x)
    {
      count++;
    }
  }
  cout << "dem x : " << count;
}
int main()
{
  int n, x;
  cin >> n >> x;
  int a[1000];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  // kiem tra x co trong mang hay khong?
  // for (int i = 0; i < n; i++)
  // {
  //   if (a[i] == x)
  //   {
  //     a[i] = x;
  //   }
  // }
  rm(a, n, x);
  return 0;
}
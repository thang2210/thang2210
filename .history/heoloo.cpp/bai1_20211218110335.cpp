
// tim so cahn trong mang nho nhat
#include <iostream>
using namespace std;
void pt(int a[1000], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 1)
    {
      cout << i << " ";
    }
  }
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
  pt(a, n);
}
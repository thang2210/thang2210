#include <iostream>

// bai 1 :
using namespace std;
bool kiem_tra(int n)
{
  bool kt = true;
  if (n < 2)
    kt = false;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      kt = false;
      break;
    }
  }
  return kt;
}
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (auto &x : a)
    cin >> x;
  for (int i = 0; i < n; i++)
  {
    if (kiem_tra(a[i]) == true)
    {
      cout << i << " ";
    }
  }
}
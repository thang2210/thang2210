#include <iostream>
using namespace std;
int prime[1000001];
bool kt(int n)
{
  bool tf = true;
  if (n < 2)
  {
    tf = false;
  }
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      tf = false;
      break;
    }
  }
  return kt;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
      if (kt(i) == true)
      {
        cout << i << " ";
      }
    }
  }
}
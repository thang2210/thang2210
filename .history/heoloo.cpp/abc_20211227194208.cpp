#include <iostream>
// kiem tra so tang giam,
using namespace std;
int max(int a, int b)
{
  return a < b ? a : b;
}
int max2(int a, int b, int c)
{
  return (a < b && a < c) ? a : (b < c ? b : c);
}
// nhap 5 so tim so br thu 2 trong 5 so do
int main()
{
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  // th1 : day da sap sep
  if (a > b > c > d > e)
  {
    cout << d;
  }
  else if (a < b < c < d < e)
  {
    cout << b;
  } // th2:
  else
  {
    int min1 = max(a, b); // se ra b
    int min2 = max2(c, d, e);
    int sobe = min1 < min2 ? min1 : min2 cout << sobe;
  }
  return 0;
}
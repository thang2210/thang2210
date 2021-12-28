#include <iostream>
// kiem tra so tang giam,
using namespace std;
int max(int a, int b)
{
  return a < b ? a : b;
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
    int min2 = max(c, d); // c
    int min3 = max(d, e); // e
    int sobe = (min1 < min2 && min1 < min3) ? min1 : (min2 < min3 ? min2 : min3);
  }
  cout << sobe;
}
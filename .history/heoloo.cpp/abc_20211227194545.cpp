#include <iostream>

using namespace std;
int max(int a, int b)
{
  return a < b ? a : b;
}
int max2(int c, int d, int e)
{
  return (c < d && c < e) ? c : (d < e ? d : e);
}
// nhap 5 so tim so br thu 2 trong 5 so do
int main()
{
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  // th1 : day da sap sep
  int min1 = max(a, b); // se ra b
  int min2 = max2(c, d, e);
  int sobe = min1 > min2 ? min1 : min2;
  cout << sobe;
  return 0;
}
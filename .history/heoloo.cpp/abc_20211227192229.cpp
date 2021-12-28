#include <iostream>
// kiem tra so tang giam,
using namespace std;

int soTang(int n)
{
  while (n > 10)
  {
    int r = n % 10;
    if (r < (n / 10) % 10 || r > (n / 10) % 10)
      return 0;
    n /= 10;
  }
  return 1;
}
// int soGiam(int n)
// {
//   while (n > 10)
//   {
//     int r = n % 10;
//     if (r > (n / 10) % 10)
//       return 0;
//     n /= 10;
//   }
//   return 1;
// }

int main()
{
  int n;
  cin >> n;
  if (soTang(n))
    cout << "so tang";
  else
    cout << "so giam";
}
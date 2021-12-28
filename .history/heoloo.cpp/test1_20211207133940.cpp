// cap so nguyen to
#include <iostream>
using namespace std;
int prime[1000001];
void seive()
{
  for (int i = 0; i <= 1000000; i++)
    prime[i] = 1;
  prime[0] = prime[1] = 0;
  for (int i = 2; i <= 1000; i++)
  {
    if (prime[i])
    {
      for (int j = i * i; j <= 1000000; j++)
      {
        prime[j] = 0;
      }
    }
  }
}
// int digitPrime(int n){ // -> tach so:
//      while (n){
//        int r = n % 10;
//        if (!(n == 2 || n == 3 || n == 5 || n == 7))
//        return 0;
//        n /= 10;
//      }
//      return 1;
// }
int main()
{
  int t;
  cin >> t;
  seive();
  while (t--)
  {
    int n;
    cin >> n;
    for (int i = 2; i <= n / 2; i++)
    {
      if (prime[i] && prime[n - i])
        cout << i << " - " << n - i << endl;
    }
  }
  return 0;
}
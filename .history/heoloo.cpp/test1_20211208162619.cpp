
//

// kiem tra so nguyen to
#include <iostream>
#include <math.h>
using namespace std;
int prime[1000001];
int sieve()
{
  for (int i = 0; i <= 1000000; i++)
    prime[i] = 1;
  prime[0] = prime[1] = 0;
  for (int i = 2; i <= 1000; i++)
  {
    if (prime[i])
    {
      for (int j = i * i; j <= 1000000; j += i)
      {
        prime[j] = 0;
      }
    }
  }
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    for (int i = a; j < b; j++)
    {
      for (int j = i; j <= b; j++)
      {
        if (prime[i])
        {
          cout << i << "- " << j << endl;
        }
      }
    }
  }
}
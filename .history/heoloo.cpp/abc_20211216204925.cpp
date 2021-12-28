#include <iostream>
#include <math.h>
using namespace std;
int prime[1000001];
void seive()
{
  for (int i = 1; i <= 1000000; i++)
    prime[i] = i;
  for (int i = 2; i <= sqrt(1000); i++)
  {
    if (prime[i] == i)
    {
      for (int j = i * i; j <= 1000000; j += i)
      {
        if (prime[j] == j)
          prime[j] = i;
      }
    }
  }
}
int check(int n)
{
  while (n)
  {
    int count = 0;
    int temp = prime[n];
    while (n % temp == 0)
    {
      count++;
      n /= temp;
    }
    cout << temp << "- " << count;
  }
}
int main()
{
  seive();
  int n;
  cin >> n;

  check(n);
}

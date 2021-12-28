#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int pt(int n)
{
  int bibo[n];
  bibo[0] = 0;
  bibo[1] = 1;
  for (int i = 2; i <= n; i++)
  {
    bibo[i] = bibo[n - 1] + bibo[n - 2];
  }
  for (int i = 0; i < n; i++)
  {
    cout << bibo[i];
  }
}
int fibo(int n)
{
  cout << "0 , 1 ";
  long long s1 = 0, s2 = 1;
  for (int i = 3; i <= n; i++)
  {
    long long s3 = s2 + s1;
    s1 = s2;
    s2 = s3;
  }
  cout << s3;
}
int main()
{
  int n;
  cin >> n;
  cout << fibo(n);
  return 0;
}
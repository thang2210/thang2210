/*#include <iostream>
using namespace std;
int uoc(int n)
{
  for (int i = 2; i <= n; i++)
  {
    if (n % i == 0)
    {
      return i;
    }
  }
}
void sove(int n, int k)
{
  for (int i = 1; i <= k; i++)
  {
    n = n + uoc(n);
  }
  cout << n;
}
int main()
{
  int n, k;
  cin >> n >> k;
  sove(n, k);
} */
// bai 36

// bai 37 :  Prime substraction
#include <iostream>
using namespace std;
int main()
{
  long long x, y;
  cin >> x >> y;
  if (x - y != 1)
    cout << "yes";
  else
    cout << "no";
  return 0;
}

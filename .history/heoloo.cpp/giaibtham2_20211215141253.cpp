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
/*#include <iostream>
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
} */

// Bài 38. Số cắt đôi
#include <iostream>
#include <string.h>
using namespace std;
void sovle(int n)
{
  int temp = 0;
  for (int i = 0; i <= sqrt(n); i++)
  {
    if (c[i] == '1')
      temp = 1;
    else if (!(c[i] == '0' || c[i] == '8' || c[i] == '9'))
    {
      temp = 0;
      break;
    }
  }
  if (!temp)
  {
    cout << "notValue";
    return;
  }
  temp = 0;
  for (int i = 0; i <= strlen(s); i++)
  {
    if (c[i] == '1')
    {
      cout << "1";
      temp = 1; // da tim thay
    }
    esle if (temp != 0)
    {
      cout << "0";
    }
  }
}
int main()
{
  char s[100];
  cin >> s;
  sovle(c);
}
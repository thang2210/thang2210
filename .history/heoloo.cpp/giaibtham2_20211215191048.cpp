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
/*#include <iostream>
#include <string.h>
using namespace std;
void sico(char s[100])
{
  int ok = 0;
  for (int i = 0; i < +strlen(s); i++)
  {
    if (s[i] == '1')
    {
      ok = 1;
    }
    else if (!(s[i] == '0' || s[i] == '8' || s[i] == '9'))
    {
      ok = 0;
      break;
    }
  }
  if (!ok)
  {
    cout << "notVa";
    return;
  }
  ok = 0;
  for (int i = 0; i <= strlen(s); i++)
  {
    if (s[i] == '1')
    {
      cout << "1";
      ok = 1;
    }
    else if (ok != 0)
    {
      cout << "0";
    }
  }
}
int main()
{
  char s[100];
  cin >> s;
  sico(s);
} */

// Bài 39. Mã hàng hóa
/*#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;
void pt(char s[100])
{
  for (int i = 0; i <= strlen(s) - 2; i++)
  {
    if (s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4')
    {
      s[i] = s[i + 1] = s[i + 2] = 'x';
    }
  }
  for (int i = 0; i <= strlen(s); i++)
  {
    if (s[i] != 'x')
      cout << s[i];
  }
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    char s[100];
    cin >> s;
    pt(s);
  }
} */

// Bài 40. Số đẹp

#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
void pt(char s[100])
{
  for (int i = 0; i <= strlen(s) - 2; i++)
  {
    if (s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4')
    {
      s[i] = s[i + 1] = s[i + 2] = 'x';
    }
  }
  for (int i = 0; i <= strlen(s); i++)
  {
    if (s[i] != 'x')
      cout << s[i];
  }
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    char s[100];
    cin >> s;
    pt(s);
  }
}
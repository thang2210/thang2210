#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int pt(char s[100])
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
    cout << pt(s);
  }
  return 0;
}
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  // bai 1 : chuyen ki tu thanh in thuong
  char s;
  cin >> s;
  for (int i = 0; i <= strlen(s); i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
    {
      s[i] -= 32;
    }
  }
  cout << s;
}
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

// bai 1 :
/*int main()
{
  // bai 1 : chuyen ki tu thanh in thuong
  char s[100];
  cin >> s;
  for (int i = 0; i <= strlen(s); i++)
  {
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
      s[i] += 32;
    }
  }
  cout << s;
} */

// Bài 3. Đếm số lượng chữ cái, kí tự số, kí tự đặc biệt trong xâu
int main()
{
  char s[100];
  cin >> s;
  int cnt1 = 0, cnt2 = 0;
  for (int i = 0; i <= strlen(s); i++)
  {
    if (isalpha(i))
      cnt1++;
    else if (isdigit(i))
      cnt2++;
  }
  cout << cnt1 << "- " << cnt2 << strlen(s) - cnt1 - cnt2;
}

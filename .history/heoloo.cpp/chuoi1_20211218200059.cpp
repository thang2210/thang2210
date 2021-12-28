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
/*int main()
{
  char s[100];
  gets(s);
  int cnt1 = 0, cnt2 = 0;
  for (int i = 0; i <= strlen(s); i++)
  {
    if (isalpha(s[i]))
      cnt1++;
    else if (isdigit(s[i]))
      cnt2++;
  }
  cout << "chu : " << cnt1;
  cout << "so : " << cnt2;
  cout << "con lai : " << strlen(s) - cnt1 - cnt2;
} */

// Bài 4. Đếm số lần xuất hiện của các kí tự trong xâu 1
int main()
{

  char s[1000];
  gets(s);
  int count[26] = {0};
  for (int i = 0; i <= strlen(s); i++)
  {
    count[s[i] - 'a']++;
  }
  for (int i = 0; i < 26; i++)
  {
    if (count[i] != 0)
    {
      cout << (i + 'a') << "- " << count[i] << endl;
    }
  }
  return 0;
}

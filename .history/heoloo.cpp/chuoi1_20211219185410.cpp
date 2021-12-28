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
/*int main()
{

  char s[100];
  cin >> s;
  int cn[26] = {0};
  for (int i = 0; i < strlen(s); i++)
  {
    cn[s[i] - 'a']++;
  }
  for (int i = 0; i < 27; i++)
  {
    if (cn[i] != 0)
    {
      cout << (i + 'a') << "-" << cn[i] << endl;
    }
  }
  return 0;
} */

// Bài 6. Đếm số lần xuất hiện của các kí tự trong xâu 3
/*int main()
{
  char s[100];
  cin >> s;
  int vn[256]= {0};
  for (int i=0 ;i < strlen(s) ;i++){
    vn[s[i]]++;
  }
  char kt;
  int res =0;
  for (int i=0 ;i < 256 ; i++){
    if ( vn[i]){
      if (vn[i] > res){
        res = vn[i];
        kt = (char)(i);
      }
    }
  }
  return kt;
} */

// Bài 7. Các kí tự xuất hiện ở cả 2 xâu

/*int main()
{
  char s1[100], s2[100];
  gets(s1);
  gets(s2);
  int vn[256] = {0};
  for (int i = 0; i < strlen(s1); i++)
  {
    vn[s1[i]] = 1;
  }
  for (int i = 0; i < strlen(s2); i++)
  {
    if (vn[s2[i]])
    {
      vn[s2[i]] = 2;
    }
  }
  for (int i = 0; i < 256; i++)
  {
    if (vn[i] == 2)
    {
      cout << i;
    }
  }
} */

// Liệt kê các kí tự chỉ xuất hiện trong xâu 1 mà không xuất hiện trong xâu 2
/*int main()
{
  char s1[100], s2[100];
  gets(s1);
  gets(s2);
  int cnt[256] = {0};
  for (int i = 0; i < strlen(s1); i++)
  {
    cnt[s1[i]] = 1;
  }
  for (int i = 0; i < strlen(s2); i++)
  {
    if (cnt[s2[i]])
    {
      cnt[s2[i]] = 0;
    }
  }
  for (int i = 0; i < 256; i++)
  {
    if (cnt[i] != 0)
    {
      cout << i;
    }
  }
} */

// Bài 9. Liệt kê các kí tự xuất hiện ở 1 hoặc 2 xâ
int main()
{
  char s1[100], s2[100];
  gets(s1);
  gets(s2);
  int vn[256] = {0};
  for (int i = 0; i < strlen(s1); i++)
  {
    vn[s1[i]] = 1;
  }
  for (int i = 0; i < strlen(s2); i++)
  {

    vn[s2[i]] = 1;
  }
  for (int i = 0; i < 256; i++)
  {
    if (vn[i] != 0)
    {
      cout << (char)(i);
    }
  }
}
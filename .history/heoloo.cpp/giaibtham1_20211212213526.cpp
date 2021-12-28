/*#include<iostream>
#include<math.h>
using namespace std;
// bai 1 kiem tra so nguyen to
int main(){
    int n;
    cin >> n;
    if ( n < 2) {
        cout << "LOAI";
    }
    int count =0;
    for (int i =2 ;i <= sqrt(n) ;i++){
        if ( n % i == 0){
            count++;
        }
    }
    if (count == 0) cout << "yes";
    else cout << "no";
    return 0;
} */

// bai 2 in cac so ngiyen to tu 1 den n
/*#include<iostream>
using namespace std;
// =>
bool isPrime(int n){
    bool kt = true;
    if ( n < 2) return false;
    for (int i =2 ;i <n ;i++){
        if ( n % i  0){
            kt = false;
            break;
        }
    }
    return kt;
}
int dua_ra(int n){
    int i =2;
    int count =0;
    while (count < n){
        if (isPrime(i) == true){
            cout << i << " ";
            count++;
        }
        i++;
    }
}
int main(){
    int n;
    cin >> n;
    dua_ra(n); //
    return 0;
}  */

// => hien so nguyen to tu a den b
// #include <iostream>
// using namespace std;
// bool kiem_tra(int n)
// {
//     bool kt = true;
//     if (n < 2)
//         return false;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             kt = false;
//             break;
//         }
//     }
//     return kt;
// }
// void isPrime(int a, int b)
// {
//     for (int i = a; i < b; i++)
//     {
//         if (kiem_tra(i) == true)
//         {
//             cout << i << " ";
//         }
//     }
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     isPrime(a, b);
//     cin >> a >> b;
// }

// BAI 3 : HIEN THI CAC SO NHO HON N
/*#include <iostream>
using namespace std;
bool isPrime(int n)
{
    bool kt = true;
    if (n < 2)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            kt = false;
            break;
        }
    }
    return kt;
}
void so_nguyen_to(int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (isPrime(i) == true)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n;
    cout << "nhap n ";
    cin >> n;
    so_nguyen_to(n);
    return 0;
} */

// BAI 3 : SANG SO NGUYEN TO TREN DOAN
// #include <iostream>
// using namespace std;
// bool isPrime(int n)
// {
//     bool kt = true;
//     if (n < 2)
//         return false;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             kt = false;
//             break;
//         }
//     }
//     return kt;
// }
// // => sang ra cac so ngueyn to
// void primeAu(int a, int b)
// {
//     for (int i = a; i <= b; i++)
//     {
//         if (isPrime(i) == true)
//         {
//             cout << i << " ";
//         }
//     }
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     primeAu(a, b);
//     return 0;
// }

// bai 4 : kiem tra so nguyen to 2 :
/*#include <iostream>
#include <math.h>
using namespace std;
int isPrime(int n)
{
    if (n < 2)
        return 0;
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    int n;
    cin >> n;
    isPrime(n);
    return 0;
} */

// thuat toan sang so nguyen to:

/*#include <iostream>
using namespace std;
int prime[1000001];
int sieve()
{
    for (int i = 0; i < 1000000; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 2; i < 1000; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
int main()
{
    int n;
    cout << "nhap : ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (prime[i])
        {
            cout << i << " ";
        }
    }
    return 0;
} */

// BAI 5 : SO NGUYEN TO VA CHU SO NGUYEN TO
/*#include <iostream>
using namespace std;
int prime[1000001];
void sieve()
{
    for (int i = 0; i <= 1000000; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= 1000; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
int isPrime(int n)
{
    while (n)
    {
        int r = n % 10;
        if (!(r == 2 || r == 3 || r == 5 || r == 7))
            return 0;
        n /= 10;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    sieve();
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;
        for (int i = a; i <= b; i++)
        {
            if (prime[i] && isPrime(i))
                count++;
        }
        cout << count;
    }
} */

// BAI 6 : SAO KE 10 SO NT DAU TIEN
/*#include <iostream>
using namespace std;
bool kiem_tra(int n)

    bool kt = true;
    if (n < 2)
        kt = false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            kt = false;
            break;
        }
    }
    return kt;
}
int isPrime(int n)
{
    int i = 2;
    int count = 0;
    while (count < n)
    {
        if (kiem_tra(i) == true)
        {
            count++;
            cout << i << " ";
        }
        i++;
    }
}
int main()
{
    int n;
    cin >> n;
    isPrime(n);
    return 0;
} */

// BAI 7 : CAP SO NGUYEN TO :
/*#include <iostream>
using namespace std;
int prime[1000001];
void sieve()
{
    for (int i = 0; i <= 1000000; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= 1000; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    sieve();
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 2; i <= n / 2; i++)
        {
            if (prime[i] && prime[n - i])
                cout << i << " - " << n - i << endl;
        }
    }
    return 0;
} */

// BAI 8 : SO THUAN NGUYEN TO:
/*#include <iostream>
#include <math.h>

using namespace std;

int kiem_tra(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}
int cnst(int n)
{
    while (n)
    {
        int r = n % 10;
        if (!(r == 2 || r == 3 || r == 5 || r == 7))
            return 0;
        n /= 10;
    }
    return 1;
}
int sumPrime(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return kiem_tra(sum);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;
        for (int i = a; i <= b; i++)
        {
            if (kiem_tra(i) && cnst(i) && sumPrime(i))
                count++;
        }
        cout << count;
    }
} */

// BAI 9 : SO NGUEYN TO CUNG NHAU
/*#include <iostream>
using namespace std;
int gdc(int a, int b)
{
    if (b == 0)
        return a;
    return gdc(b, a % b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i < b; i++)
    {
        for (int j = i + 1; j <= b; j++)
        {
            if (gdc(i, j) == 1)
                cout << i << " - " << j << endl;
        }
    }
} */

// BAI 10 : LIET KE CAC SO CO DUNG 3 UOC SO :
// 1 so co 3 uoc so thi la binh phuong so nguyen to :
// CACH 1 : ===========>
/*#include <iostream>
using namespace std;
int dem(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 3)
        return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            if (dem(i))
            {
                cout << i << " ";
            }
        }
    }
} */

// CACH 2 :
/*#include <iostream>
#include <math.h>
using namespace std;
int prime[1001];
int seive()
{
    for (int i = 0; i <= 1000; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 0; i <= sqrt(1000); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 1000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
int main()
{
    seive();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (prime[i])
            {
                cout << i * i << " ";
            }
        }
    }
} */

// BAI 11 : DEM 3 UOC:
/*#include <iostream>
using namespace std;
int den(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 3)
        return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    int cnt2 = 0; // dem trong
    while (t--)
    {
        int n;
        cin >> n;
        int cnt2 = 0;
        for (int i = 1; i <= n; i++)
        {
            if (den(i))
            {
                cnt2++;
            }
        }
        cout << cnt2;
    }
} */

// cach 2 :
/*#include <iostream>
#include <math.h>
using namespace std;
int prime[1001];
int seive()
{
    for (int i = 0; i <= 1000; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 0; i <= sqrt(1000); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 1000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
int main()
{
    seive();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (prime[i])
            {
                count++;
            }
        }
        cout << count;
    }
    return 0;
} */

// bai 12  : T-PRIME 13;
/*#include <iostream>
#include <math.h>
using namespace std;
int prime[1000001];
int seive()
{
    for (int i = 0; i <= 1000000; i++)
        prime[i] = 1;
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= 1000; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
int main()
{
    seive();
    int t;
    cin >> t;
    while (t--)
    {
        long long l, r;
        cin >> l >> r;
        int count = 0;
        for (int i = sqrt(l); i <= sqrt(r); i++)
        {
            if (prime[i])
            {
                count++;
            }
        }
        cout << count;
    }
    return 0;
} */

// uoc so nguyen to nho nhat

// int nt(int n){
//     for (int i = 2; i <= sqrt(n) ; i++){
//         if ( n % i == 0)
//         return 0;
//     }
//     return n >1;
// }
// int find(int n){
//     for (int i =2 ; i <= n ;i++){
//         if ( n % i == 0 %% nt(i))
//         return i;
//     }
// }

// BAI 13 :
/*#include <iostream>
#include <math.h>
using namespace std;
int prime[1000001];
int seive()
{
    for (int i = 1; i <= 1000000; i++)
        prime[i] = i;
    for (int i = 2; i <= sqrt(1000000); i++)
    {
        if (prime[i] == i)
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                if (prime[j] == j)
                {
                    prime[j] = i;
                }
            }
        }
    }
}
int main()
{
    seive();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << prime[i] << " ";
        }
    }
} */

// ------------------------> CHUONG 2 : PHAN TICH THUA SO NGUYEN TO ---------------------
// BAI 1 : Hãy phân tích một số nguyên dương n thành thừa số nguyên tố
// #include <iostream>
// #include <math.h>
// using namespace std;
// void pt(int &n)
// {
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if ( n % i == 0)
//         cout << i;
//         while ( n % i == 0)
//         n /= i;
//     }
//     if (n != 1)
//         cout << n;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     pt(n);
//     return 0;
// }

// bai 2 : . Phân tích 2.(Sử dụng sàng số nguyên tố biến đổi).
/*#include <iostream>
#include <math.h>
using namespace std;
int prime[1000001];
int sieve()
{
    for (int i = 0; i <= 1000000; i++)
        prime[i] = i;
    for (int i = 2; i <= sqrt(1000); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 1000000; j++)
            {
                if (prime[j] == j)
                    prime[j] = i;
            }
        }
    }
}
int pt(int &n)
{
    while (n != 1)
    {
        int count = 0;
        int temp = prime[n]; // thua so nguyen to nho nhat cua n
        while (n % temp == 0)
        {
            count++;
            n /= temp;
        }
        cout << temp << "-" << count << endl;
    }
}
int main()
{
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        pt(n);
    }
    return 0;
} */

// bai 3 : Đếm thừa số nguyên tố

/*#include <iostream>
#include <math.h>
using namespace std;
int pt(int n)
{
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n != 1)
        count++;
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << pt(n);
    }
} */

// bai 4 : Lũy thừa và giai thừa
/*#include <iostream>
using namespace std;
int pt(int n, int p)
{
    int sum = 0;
    for (int i = p; i <= n; i *= p)
    {
        sum += n / i;
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;
        cout << pt(n, p);
    }
} */

// bai 5 : Đếm số lượng chữ số 0 của n!.
/*#include <iostream> // co co bao nhieu so 0 ( hay so 10);
using namespace std;
int pt(int n)
{
    int count = 0;
    for (int i = 5; i <= n; i += 5)
    {
        int temp = i;
        while (temp % 5 == 0)
        {
            count++;
            temp /= 5;
        }
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << pt(n);
    }
} */

// bai 6 :  Số Sphenic
/*#include <iostream>
#include <math.h>
using namespace std;
int pt(int n)
{
    int res = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        int count = 0;
        while (n % i == 0)
        {
            count++;
            n /= i;
        }
        if (count >= 2)
            return 0;
        if (count == 1)
            res++;
    }
    if (n != 1)
        res++;
    return res == 3;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << pt(n);
    }
} */

// bai 7 : Số Smith
/*#include <iostream>
#include <math.h>
using namespace std;
// tinh tong
int sum(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int pt(int n)
{
    int sum1 = sum(n);
    int sum2 = 0;
    int temp = n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            sum2 += sum(i);
            n /= i;
        }
    }
    if (temp == n)
        return 0;
    if (n != 1)
        sum2 += sum(n);
    return sum1 == sum2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (pt(n))
            cout << "yes";
        else
            cout << "no";
    }
} */

// Bài 8. Ước số nguyên tố lớn nhất của số nguyên dương.
/*#include <iostream>
#include <math.h>
using namespace std;
int sovle(int n)
{
    int res;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            res = i;
            n /= i;
        }
    }
    if (n != 1)
        res = n;
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << sovle(n);
    }
} */

// bai 9 : Bình phương nguyên tố
// so dep
/*#include <iostream>
#include <math.h>
using namespace std;
int sodep(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        int count = 0;
        while (n % i == 0)
        {
            count++;
            n /= i;
        }
        if (count >= 2)
            return 1;
    }
    return 0;
}
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (sodep(i))
        {
            cout << i << " ";
        }
    }
} */

// CHUONG 2 : SO THUAN NGHICH --------------------------------------------
// bai 3 :
/*#include <iostream>
#include <math.h>
using namespace std;
int pt(long long n)
{
    long long res = 0, m = n;
    while (n != 0)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    if (res == m)
        return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (pt(n))
            cout << "yes";
        else
            cout << "no";
    }
} */

// bai 2 : Số chính phương.
/*#include <iostream>
using namespace std;
bool kiem_tra(int n){
    if ( n < 2) return false;
    int i =1;
    while ( i*i <= n){
        if (i*i == n){
            return true;
        }
        i++;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (pt1(n))
            cout << "yes";
        else
            cout << "no";
    }
}*/

// bai 3 : Số chính phương trong đoạn
/*#include <iostream>
using namespace std;
bool kiem_tra(int n)
{
    if (n < 1)
        return false;
    int i = 1;
    while (i * i <= n)
    {
        if (i * i == n)
        {
            return true;
        }
        i++;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            if (kiem_tra(i))
            {
                cout << i << " ";
            }
        }
    }
} */

// bai 4 : dem so chinh phuong trong doan
/*#include <iostream>
using namespace std;
bool kiem_tra(int n)
{
    if (n < 1)
        return false;
    int i = 1;
    while (i * i <= n)
    {
        if (i * i == n)
        {
            return true;
        }
        i++;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;
        for (int i = a; i <= b; i++)
        {
            if (kiem_tra(i))
            {
                count++;
            }
        }
        cout << count;
    }
} */

// bai 5 : Tính tổng ước của 1 số nguyên dương n
/*#include <iostream>
using namespace std;
int max(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << max(n);
    }
} */

// bai 6 : Đếm số lượng ước của 1 số nguyên dương n.
/*#include <iostream>
using namespace std;
int cnt(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << cnt(n);
    }
} */

// Bài 7.Bài 7. Số có ước lẻ.
/*#include <iostream>
#include <math.h>
using namespace std;
int pt(long long n)
{
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i != n / i)
                count += 2;
            else
                count++;
        }
    }
    if (count % 2 == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (pt(n))
            cout << "ues";
        else
            cout << "no";
    }
} */

// bai 8  : SO HOAN HAO
/*#include <iostream>
#include <math.h>
using namespace std;
int kt(int n)
{
    int sum = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i != n / i)
                sum += i + n / i;
            else
                sum += i;
        }
    }
    if (sum == n)
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (pt(n))
            cout << "yes";
        else
            cout << "no";
    }
} */

// Bài 9. Tổng chữ số.
/*#include <iostream>
#include <math.h>
using namespace std;
int sm(long long n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << sm(n);
    }
} */

// bai 10 : so tang giam :
/*#include <iostream>
#include <math.h>
using namespace std;
int nt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int isThang(int n)
{
    while (n >= 10)
    {
        int r = n % 10;
        if (r <= (n / 10) % 10)
            return 10;
        n /= 10;
    }
    return 1;
}
int isGiam(int n)
{
    while (n >= 10)
    {
        int r = n % 10;
        if (r >= (n / 10) % 10)
            return 10;
        n /= 10;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = pow(10, n - 1); i <= pow(10, i); i++)
    {
        if ((isThang(i) || isGiam(i)) && nt(i))
        {
            count++;
        }
    }
    cout << count;
} */

// so Fabonaci ,, in ra n so fanbonaci
/*#include <iostream>
using namespace std;
int pt2(int n){
    cout << "0, 1";
    long long so1 = 0 , so2 = 1;
    for (int i =3 ;i <= n ;i++){
        long long so3 = so2 + s01
        cout << so3;
        so1 = so2;
        so2 = so3;
    }
}
int pt(int n)
{
    long long a[n];
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    pt(n);
    return 0;
} */

// bai 12 kiem tra bibo
/*#include <iostream>
#include <math.h>
using namespace std;
int pt(int n)
{
    if (n == 0 || n == 1)
        return 1;
    long long s1 = 0, s2 = 1;
    for (int i = 3; i <= 93; i++)
    {
        long long s3 = s2 + s1;
        if (s3 == n)
            return 1;
        s1 = s2;
        s2 = s3;
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (pt(n))
            cout << "yes";
        else
            cout << "no";
    }
    return 0;
} */

// bai 13 so dep;
/*#include <bits/stdc++.h>
using namespace std;
int snt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}
int fibo(int n)
{
    if (n == 0 || n == 1)
        return 1;
    long long so1 = 0, so2 = 1;
    for (int i = 3; i <= 20; i++)
    {
        long long sn = so2 + so1;
        if (sn == n)
            return 1;
        so1 = so2;
        so2 = sn;
    }
    return 0;
}
int sum(int n)
{
    int ans = 0;
    while (n)
    {
        ans += n % 10;
        n /= 10;
    }
    return fibo(ans);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ok = 0;
        for (int i = a; i <= b; i++)
        {
            if (sum(i) && snt(i))
            {
                cout << i << " ";
                ok = 1;
            }
        }
        if (!ok)
            cout << " -1";
    }
} */

// Bài 14. Thuận nghịch và có 3 ước số nguyên tố.
/*#include <iostream>
#include <math.h>
using namespace std;
int stn(int n)
{
    int res = 0, m = n;
    while (n != 0)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res == m;
}
 int check(int n)
 {
     int count = 0;
    for (int i = 2; i <= sqrt(n); i++)
     {
//         int ans = 0;
//         while (n % i == 0)
//         {
//             ans++;
//             n /= i;
//         }
//         if (ans != 0)
//             count++;
//     }
//     if (n != 1)
//         count++;
//     return count >= 3;
// }
int main()
{
    int a, b;
    cin >> a >> b;
    int temp = 0;
    for (int i = a; i <= b; i++)
    {
        if (check(i) && stn(i))
        {
            cout << i << " ";
            temp = 1;
        }
    }
    if (!temp)
        cout << "-1";
} */

// bai 14 : cach 2 :
/*#include <iostream>
#include <math.h>
using namespace std;
int stn(int n)
{
    int res = 0, m = n;
    while (n != 0)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res == m;
}
int nt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}
int check(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && nt(i))
        {
            count++;
        }
    }
    return count >= 3;
}
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (check(i) && stn(i))
        {
            cout << i << " ";
        }
    }
} */

// bai 15:  Đếm chữ số chẵn, lẻ.
/*#include <iostream>
using namespace std;
int pt(long long n)
{
    int even = 0, odd = 0;
    while (n)
    {
        int r = n % 10;
        if (r % 2 == 0)
            even++;
        else
            odd++;
        n /= 10;
    }
    cout << even << "-" << odd;
}
int main()
{
    long long n;
    cin >> n;
    pt(n);
} */

// Bài 16. Số Strong.
/*#include <iostream>
using namespace std;
// ham tinh giai thau
int gy(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int strong(int n)
{
    int sum = 0, m = n;
    while (n)
    {
        sum += gy(n % 10);
        n /= 10;
    }
    return sum == m;
}
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (strong(i))
        {
            cout << i << " ";
        }
    }
} */

// Bài 17. Số Lộc phát
/*#include <iostream>
using namespace std;
int solocphay(int n)
{
    while (n)
    {
        int r = n % 10;
        if (!(r == 0 || r == 6 || r == 8))
            return 0;
        n /= 10;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << solocphay(n);
    }
} */

// Bài 18. Thuận nghịch và lộc phát.

#include <iostream>
using namespace std;
int stn(int n)
{
    int res = 0, m = n;
    while (n)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res == m;
}
int chuso6(int n)
{
    while (n)
    {
        int r = n % 10;
        if (n % 10 == 6)
            return 1;
        n /= 10;
    }
    return 0;
}
int chuso8(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    if (sum % 10 == 8)
        return 1;
    else
        return 0;
}
int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (chuso6(i) && chuso8(i) && stn(i))
        {
            cout << i << " ";
        }
    }
}
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
// BAI 1 : H??y ph??n t??ch m???t s??? nguy??n d????ng n th??nh th???a s??? nguy??n t???
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

// bai 2 : . Ph??n t??ch 2.(S??? d???ng s??ng s??? nguy??n t??? bi???n ?????i).
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

// bai 3 : ?????m th???a s??? nguy??n t???

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

// bai 4 : L??y th???a v?? giai th???a
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

// bai 5 : ?????m s??? l?????ng ch??? s??? 0 c???a n!.
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

// bai 6 :  S??? Sphenic
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

// bai 7 : S??? Smith
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

// B??i 8. ?????c s??? nguy??n t??? l???n nh???t c???a s??? nguy??n d????ng.
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

// bai 9 : B??nh ph????ng nguy??n t???
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

// bai 2 : S??? ch??nh ph????ng.
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

// bai 3 : S??? ch??nh ph????ng trong ??o???n
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

// bai 5 : T??nh t???ng ?????c c???a 1 s??? nguy??n d????ng n
#include <iostream>
using namespace std;
int sum1(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << sum1(n);
    }
    return 0;
}
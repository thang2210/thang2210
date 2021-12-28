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

// so thuan nguyen to
#include <iostream>
#include <math.h>
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
int csnt(int n)
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
    return snt(sum);
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
            if (snt(i) && csnt(i) && sumPrime(i))
                cout << i << " ";
        }
    }
}
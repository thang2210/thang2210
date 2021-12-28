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
#include <iostream>
using namespace std;
int prime[1000001];
void sieve()
{
    for (int i = 0; i <= 100000; i++)
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
int digitPrime(int n)
{
    while (n)
    {
        int r = n % 10;
        if (!(r != 2 || r != 3 || r != 5 || r != 7))
            return 0;
        n /= 10;
    }
    return 1;
}
int main()
{
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;
        for (int i = a; i <= b; i++)
        {
            if (prime[i] && digitPrime(i))
                count++;
        }
        cout << count;
    }
}

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

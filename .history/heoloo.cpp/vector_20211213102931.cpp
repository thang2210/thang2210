// #include <iostream>
// #include <vector>
// #include <string.h>
// using namespace std;
// vector<kieu du lieu > ten_vectoe
// push_back() day ve cuoi
// size() kick thuoc cua vector
// truy cap phan tu trong vecto
// duyrt thong qua chi so (index)
// duyet bang for each
// kieu du lieu long long string

/*int main(){
    int n;
    cin >> n;
    vector<int> it(n,100); // khai bao vecto da co san n pahn ti
    for (int i =0 ;i <n ;i++){
        cout << it[i] << endl;
    }
    it.push_back(20);
    return 0;
} */

// viet so smith
#include <iostream>
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
int fibo(int n)
{
    if (n == 0 || n == 1)
        return 1;
    long long s1 = 0, s2 = 1;
    for (int i = 3; i <= 20; i++)
    {
        long long s3 = s2 + s1;
        if (s3 == n)
            return 1;
        s1 = s2;
        s2 = s3;
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
        int temp = 0;
        for (int i = a; i <= b; i++)
        {
            if (sum(i) && nt(i))
            {
                cout << i << " ";
                temp = 1;
            }
        }
        if (!temp)
            cout << "-1";
    }
}

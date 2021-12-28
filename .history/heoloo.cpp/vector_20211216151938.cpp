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
int prime[1000001];
int sieve()
{
    for (int i = 0; i <= 1000000; i++)
    {
        prime[i] = 1;
        prime[0] = prime[1] = 0;
        for (int i = 2; i <= 1000; i++)
        {
            if (prime[i])
            {
                for (int j = i * i; j <= 1000000; j += i)
                {
                    prime[j];
                }
            }
        }
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
        cin >> t;
        for (int i = 1; i <= n; i++)
        {
            cout << prime[i];
        }
    }
    return 0;
}
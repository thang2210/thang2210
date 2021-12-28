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
    for (int t = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}
int uoc(int n)
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
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        for (int i = a; i <= b; i++)
        {
            if (uoc(i) && stn(i))
            {
                cout << i << " ";
            }
        }
        // if (!temp)
        //     cout << "-1";
    }
}

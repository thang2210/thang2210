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
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            if (chuso6(i) && chuso8(i) && stn(i))
            {
                cout << i;
            }
        }
    }
}

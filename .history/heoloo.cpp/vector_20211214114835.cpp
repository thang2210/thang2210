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
    int res = 0;
    while (n)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}
int chuso9(int n)
{
    while (n)
    {
        if (n % 10 == 9)
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
        int count = 0;
        for (int i = 2; i < n; i++)
        {
            if (chuso9(i) && stn(i))
            {
                cout << i << " ";
                count++;
            }
        }
        cout << count;
    }
}
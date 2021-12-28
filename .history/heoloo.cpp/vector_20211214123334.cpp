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
int pt(long long n)
{
    int s2 = 0, s3 = 0, s5 = 0, s7 = 0;
    int m = stn(n);
    while (n)
    {
        int r = n % 10;
        if (r == 2)
            s2++;
        else if (r == 3)
            s3++;
        else if (r == 5)
            s5++;
        else if (r == 7)
            s7++;
        n /= 10;
    }
    while (m)
    {
        int r = m % 10;
        if (r == 2 && s2 != 0)
        {
            cout << "2 - " << s2 << endl;
            s2 = 0;
        }
        else if (r == 3 && s3 != 0)
        {
            cout << "3 - " << s3 << endl;
            s3 = 0;
        }
        else if (r == 5 && s5 != 0)
        {
            cout << "5 - " << s5 << endl;
            s5 = 0;
        }
        else if (r == 7 && s7 != 0)
        {
            cout << "7 - " << s7 << endl;
            s7 = 0;
        }
        m /= 10;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        pt(n);
    }
}
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
int pt(int n, int k)
{
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                count++;
                n /= i;
                if (count == k)
                    return i;
            }
        }
    }
    if (n != 1)
        count++;
    if (count == k)
        return n;
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        while (t--)
        {
            int n, k;
            cin >> n >> k;
            cout << pt(n, k);
        }
    }
}
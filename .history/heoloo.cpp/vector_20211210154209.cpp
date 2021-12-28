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
        if (pt(i))
            cout << "yes";
        else
            cout << "no";
    }
}
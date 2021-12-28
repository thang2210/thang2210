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
int pt(int x, int y, int z, int n)
{
    for (int i = pow(10, n - 1); i <= pow(10, n); i++)
    {
        if (i % x == 0 && i % y == 0 && i % z == 0)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int x, y, z, n;
    cin >> x >> y >> z >> n;
    cout << pt(x, y, z, n);
}
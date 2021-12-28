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
#include <string.h>
using namespace std;
int pt(char c[100])
{
    int s2 = 0, s3 = 0, s5 = 0, s7 = 0;
    for (int i = 0; i <= strlen(c); i++)
    {
        if (c[i] == '2')
            s2++;
        else if (c[i] == '3')
            s3++;
        else if (c[i] == '5')
            s5++;
        else if (c[i] == '7')
            s7++;
    }
    for (int i = 0; i <= strlen(c); i++)
    {
        if (c[i] == '2' && s2 != 0)
            cout << "2 - " << s2 << endl;
        s2 = 0;
        else if (c[i] == '3' && s3 != 0) cout << "3 - " << s3 << endl;
        s3 = 0;
        else if (c[i] == '5' && s5 != 0) cout << "5 - " << s5 << endl;
        s5 = 0;
        else if (c[i] == '7' && s7 != 0) cout << "7 - " << s7;
        s7 = 0;
    }
}
int main()
{
    char c[100];
    cin >> c;
    cout << pt(n);
}
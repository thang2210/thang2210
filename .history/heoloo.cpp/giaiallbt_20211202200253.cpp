// truyen tham tri va tham chieu cho ham
// tham chieu la truyen tu bien nay sang bien khac khi no co cung don vi
// truyen tham tri
// - truyen gia tri tu bien nay sang bien khac 
// swap 2 so 
// tinh rong s = 1! + 2! + ,,, + n!
// kiem tra so hoan hao
/*#include<iostream>
using namespace std;
bool chek(int n){
    int sum =0;
    for (int i =0 ;i <= n/2 ; i++){
        if ( n % i == 0){
            sum += i;
        }
    }
    if (sum == n) return true;
    return false;
}
int main(){
    int n;
    cout << "nhap : ";
    cin >> n;
    if (chek(n) )
    cout << "la so hoan hao";
    else 
    cout << "no";
    return 0;
} */

/*#include<iostream>
using namespace std;
int check_Array(int a[100] , int n){
    int sum =0; 
    int count =0; // dem cac so chan trong mang 
    for (int i =0 ;i <n ;i++){
        if ( a[i] % 2 == 0){
            sum += a[i];
            count++;
        }
    }
    cout << "gia tri trung binh cac so chan se la : " << int(sum/count);
}
int main(){
    int n;
    cout << "nhap n  ;";
    cin >> n;

    int a[100];
    // nhap du lieu dau vao 
    for (int i =0 ;i <n ;i++){
        cin >> a[i];
    }
    check_Array(a,n);
    return 0;
} */

// GiAI BAI KT 1 TIET PTIT
/*#include<iostream>
// giai pt bac 1; ax + b =0;
using namespace std;
int main(){
    float a ,b;
    cout << "nhap a , b;" ;
    cin >> a >> b;
    if ( a == 0 && b == 0 ){
        cout << "py vo nghiem ";
    } else if ( a== 0 && b != 0){
        cout << "pt vo songhiem : ";
    } else if ( a!= 0 && b != 0){
        cout << "pt co 1 nghiem phan biet : x = " << -b/a;
    }
    return 0;
} */


// bai 3
/*#include<iostream>
using namespace std;
int check_mang(int a[1000] , int n){
    int sum =0;
    int count =0; // dem cac so chan trong mangtrong bang:
    for (int i =0 ;i <n ;i++){
        if ( a[i] % 2 == 0){
            sum += a[i];
            count++;
        }
    } 
    if ( count == 0){
        cout << "trung binh cong cua mang se la : " << int(sum/count);
    } else {
        cout << "NO";
    }
}
int main(){
    int n;
    cout << "nhap n : ";
    cin >> n;
    do {
        if ( n < 1 || n > 100){
            cout << "moi Ban nhap lai : ";
            cin >> n;
        }
        n++;
    } while ( n != 0);

    /*int a[1000];
    cout << "nhap cac phan tu cua mang ";
    for (int i =0 ;i <n ;i++){
        cin >> a[i];
    }
    check_mang(a,n);
    return 0;
} */



// gia tri lon nhat mang so thuc
/*#include<iostream>
using namespace std;
float maxArray(int a[1000] , int n){
    float max = a[0];
    for (int i =0 ;i <n ;i++){
        if ( max < a[i]){
            max = a[i];
        }
    }
    return max;
}
int main(){
    float n;
    cout << "nhap n : ";
    cin >> n;
    int a[1000];
    for (int i =0 ;i <n ;i++){
        cin >> a[i];
    }
    cout << "so lon : " << maxArray(a,n);
    return 0;
} */


// kiem tra mang co ton tai gia tri chan nho hon 2001
/*#include<iostream>
using namespace std;
int check_array(int a[1000] , int n ){
    int count =0;
    for (int i =0 ;i <n ; i++){
        if (a[i] % 2 == 0 && a[i] < 2001 ){
            count++;
        }
    }
    cout << "co nhung so chan nho hon 2001 la : " << count;
}
int main(){
    int n;
    cout << "nhap n : ";
    cin >> n;
    int a[1000];
    for (int i =0 ;i < n ;i++){
        cin >> a[i];
    }
    check_array(a,n);
    return 0;
} */


// dem so nt nho hon 100
// liet ke 10 snt dau 
/*#include<iostream>
using namespace std;
bool check_prime(int n){
    bool kt = true;
    if ( n < 2){
        kt = false;
    }
    for (int i =2 ;i <n ;i++){
        if ( n %i == 0){
            kt = false;
            break;
        }
    }
    return kt;
}
int issPrime(int a[1000] ,int n){
    int count =0;
    for (int i =0 ;i <n ;i++){
        if (check_prime(a[i]) == true && a[i] < 100){
            count++;
        }
    }
    cout << "cac so nguyen  : " << count;
}
int main(){
    int n;
    cout << "nhap n : ";
    cin >> n;
    int a[1000];
    for (int i =0 ;i < n; i++){
        cin >> a[i];
    }
    issPrime(a,n);
    return 0;
} */

// tinh tong cac gia tri am 
/*#include<iostream>
using namespace std;
int sumOfArray(int a[1000] , int n){
    int sum =0;
    for (int i=0 ;i <n;i++){
        if (a[i] < 0){
            sum += a[i];
        }
    }
    cout << "tong se la : " << sum;
}
int main(){
    int n;
    cout << "nhap n : ";
    cin >> n;
    int a[1000];
    for (int i =0 ;i <n ;i++){
        cin >> a[i];
    }
    sumOfArray(a,n);
    return 0;
} */


// on lai xiu 
// tinh tien to trong mang 1 chieu theo 2 cach 
// cach 1 :
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for ( auto &x : a) cin >> x;
    int q; cin >> q;
    while (q--){
        int l , r;
        cin >> l >> r;
        int sum =0;
        for (int i = l ; i<= r ;i++){
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}*/


// cach 2 : dem tu 1 
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n+1];
    for (int i= 1; i <= n ;i++){
        cin >> a[i];
    }
    int fexfix[n+1] = {0};
    for (int i =1 ; i<= n ;i++){
        fexfix[i] = fexfix[i-1] + a[i];
    }
    int q;cin >>q;
    while (q--){
        int l , r;
        cin >> l >> r;
        cout << fexfix[r] - fexfix[l-1] << endl;
    }
    return 0;
} */


// viet ham tanh gia tri len 1
/*include<iostream>
using namespace std;
void check(int* p){
    (*p)++;
}
int main(){
    int n;
    cin >> n;
    check(&n);
    cout << "h L " << n;
    return 0;
} */


// chuyen in hao thanh in thuong 
/*#include<iostream>
using namespace std;
int srting(string* p ){
    for (int i =0 ;i < (*p).size() ; i++){
        if ((*p)[i] >= 'a' && (*p)[i] <= 'z'){
            (*p)[i] -= 32;
        }
    }
    cout << *p << endl;
}
int main(){
    string s;
    cout <<"nhap s : ";
    cin >> s;
    srting(&s);
    return 0;
} */

// viet ham tra ve gia tri lon nhat su dung con tro 
/*#include<iostream>
using namespace std;
int maxArray(int* p , int n){
    int max = p[0];
    for (int i =0 ;i <n ;i++){
        if (p[i] > max){
           max = p[i];
        }
    }
    return max;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a) cin >> x;
    cout << "max : " << maxArray(a,n);
    return 0;
} */

// su dung mang cap phat dong tinh tong cac pt trong mang 
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int* a = new int[100];
    for (int i =0 ;i < n ; i++){
        cin >> a[i];
    }
    int sum =0;
    for (int i = 0 ;i <n ;i++){
        sum += a[i];
    }
    cout << sum;
    delete[]a;
    return 0;
} */

// ting tong cac so chia het cho 3 ma k chia het cho 5
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int* a = new int[100];
    for (int i =0 ;i <n ;i++){
        cin >> a[i];
    }
    for (int i =0 ;i <n ; i++){
        if (a[i] % 3 == 0 && a[i] % 5 != 0){
            cout << a[i] << " ";
        }
    }
    delete[]a;
    return 0;
} */


// tinh tong cac hang trong mang 
/*#include<iostream>
using namespace std;
int main(){
    int n ,m; // n la hang m la cot
    cin >> n >> m;
    int** a;
    a = new int*[n];
    for (int i =0 ;i <n ;i++){
        a[i] = new int[m];
    }
    for (int i =0 ;i <n ;i++){
        for (int j =0 ;j <m ; j++){
            cin >> a[i][j];
        }
    }
    // tinh tong cot trong mang 
    for (int i =0 ;i < m ; i++){
        int sum =0;
        for (int j =0 ; j < n ; j++){
            sum += a[j][i];
        }
        cout << sum << endl;
    }
    for (int i =0 ;i <n ;i++){
        delete [] a[i];
    }
    delete[]a;
    return 0;
} */

// struct 
/*#include<iostream>
using namespace std;
struct studen {
    string name;
    int age;
};
int main(){
    studen s;
    cin >> s.name;
    cin >> s.age;
    cout << "name : " << s.name << endl;
    cout << "tuoi : " << s.age;
    return 0;
} */

// tim sinh vien co diem cao nhat 
/*#include<iostream>
using namespace std;
struct studen {
    string name;
    int age;
    int score;
};
int main(){
    int n;
    cin >> n;
    studen* a = new studen[100];
    for (int i =0 ;i <n ;i++){
        cin >> a[i].name >> a[i].age >> a[i].score;
    }
    // tim hs co diem cao nhat 
    studen max = a[0];
    for (int i =1 ;i <n ;i++){
        if ( max.score < a[i].score){
            max = a[i];
        }
    }
    cout << "name : " << max.name << endl;
    cout << "age : " << max.age << endl;
    cout << "score : " << max.score;
    delete[]a;
    return 0;
} */


// display()
#include<iostream>
using namespace std;
struct student{
    string name;
    int age;
    void display(){
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
    }
};
int main(){
    int n;
    cin >> n;
    student* a = new student[1000];
    for (int i =0 ;i < n ;i++){
        cin >> a[i].name >> a[i].age;
    }
    for (int i =0 ;i <n ; i++){
        a[i].display();
    }
    delete[]a;
    return 0;
}
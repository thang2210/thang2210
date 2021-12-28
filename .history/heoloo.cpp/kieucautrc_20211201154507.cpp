// tom tat li thuyet la ntn nay 
// TOAN TU AND (&) 
// KHI MUON DOI 1 SO HE 10 SANG HE NHI PHAN TA CU CHIA LIEN TIEP CHO NO QUA 2 LAY 
// PHAN DU ROI DAO NGUOC LA RA
/*
  --- NEU 1 TRONG 2 BIT CO GIA TRI BANG NHAU SE TRA VE 1
    NGUOC LAI SE TRA VE 0
    ---- TOAN TU OR (\);
    - NEU 1 TRONG 2 BIT CO GIA TRI BANG1 SE TRA VE 1 
    NGUOC LAI SE TRA VE 0
    VD : 
            0 \ 0 = 0
            1 \0 = 1
            0 \1 =1
            1 \ 1 = 1

 ---TOAN TU XOR ( ^ )
 GUA 2 BIT NO SE TRA VE 1 NEU GIA TRI CAU NO DOI NHAU 
 NGGUOC LAI SE TRA VE 0
      

 -- PHEP DICH TRAI DICH PHAI , DICH SANG BAO NHIEU DON VI 
 -- PHEP DAO BITT
  DAO TAT CA CAC SO 0 THANH 1 THANH 0
  */


 // BAI TAP 1 : CHO 2 SO NGUYEN NHAP TU BAN PHIM 
 // HAY VIEN CT (A & B) + (A \ B)
 




/*
 
  KIEU STRUCT : CHO PHEP BAN KET HOP TAT CA KIEU DU LIEU MOI DO BAN TU DINH NGHIA 

*/

// BAI 1 TAO 2 THUOC TINH CO HS VA TUOI 

#include<iostream>
 /*using namespace std;
// khai bao struct voi 2 doi tuong la tuoi va ten 
struct Student
{
  string name;
  int age;
  string Adress;
  int Date;
};

int main(){
  // tao ra 1 s1 de luu tru thong tin
  Student s1;
  cout << "nhap ten ";
  cin >> s1.name;
  cout << "nhap tuoi : ";
  cin >> s1.age;
  cout << "nhap dia chi : ";
  cin >> s1.Adress;
  cout << "nhap nagy sinh : ";
  cin >> s1.Date;
  cout << "ho va ten : " << s1.name << endl;
  cout << "tuoi : " << s1.age << endl;
  cout << "DIA CHI : " << s1.Adress << endl;
  cout << "Ngay SInh : " << s1.Date;
  return 0;
} */


// BAI 2 : NAHP BAN PHIM MANG CAP PHAT DONH 
// hien diem sinh vien coa nhat 
// tim tuoi cua hs cao nhat di : 
#include<iostream>
using namespace std;
struct student
{
  string name;
  int age;
  int score;
};

int main(){
  int n;
  cout << "nhap so phan tu : ";
  cin >> n;
  // khoi toa mang cap paht dong 
  int* tuoihs = new student[100];
  // nhap gia tri dau vao 
  for (int i =0 ;i <n ;i++){
    cin >> tuoihs[i].name >> tuoihs[i].age >> tuoihs[i].score;
  }
  // tim hoc sinh co so tuoi cao nhat di 
  student maxage = tuoihs[0];
  for (int i =1 ; i < n ;i++){
    if (tuoihs[i].age > maxage.age){
      maxage = tuoihs[i];
    }
  }
  cout << "ten : " << maxage.name << endl;
  cout << "tuoi : " << maxage.age << endl;
  cout << "doem : " << maxage.score;
  delete[] tuoihs;
  return 0;
}
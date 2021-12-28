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


#include<iostream>

using namespace std;

struct Student {
	string name;
	int age;
};

int main() {
	Student s1;
	cin >> s1.name;
	cin >> s1.age;
	cout << "Name: " << s1.name << endl;
	cout << "Age: " << s1.age;
	return 0;
}
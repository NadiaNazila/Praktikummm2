/* Program Menghitung Segitiga Siku-Siku */
/* Nadia Nazila Ramadina */
/* 20051397028 */
/* 2020B */

#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	char menu;
	int alas,tinggi,siring,luas,keliling;
	cout << "Program Penghitung Segitiga Siku-Siku" << endl;
	cout << "=====================================" << endl;
	cout << "Pilih Menu (1|2|3|4) : \n1. Hitung Panjang Sisi Miring \n2. Hitung Luas \n3. Hitung Keliling \n4. Keluar Program" << " : " << endl;
	cin >> menu;
	cout << endl;
	
switch (menu)
{
 case '1' :
 {
  cout << "Masukkan Alas";
  cin >> alas;
  cout << "Masukkan Tinggi";
  cin >> tinggi;
  siring = sqrt (alas*alas + tinggi*tinggi);
  cout << "Panjang Sisi Miring adalah";
  cout << siring;
  break;
 }
case '2' :
 {
  cout << "Masukkan Alas";
  cin >> alas;
  cout << "Masukkan Tinggi";
  cin >> tinggi;
  luas = 0.5*alas*tinggi;
  cout << "Luas Segitiga Siku-Siku adalah";
  cout << luas;
  break;
 }
case '3' :
 {
  cout << "Masukkan Alas";
  cin >> alas;
  cout << "Masukkan Tinggi";
  cin >> tinggi;
  siring = sqrt (alas*alas + tinggi*tinggi);
  keliling = alas + tinggi + siring;
  cout << "Keliling Segitiga Siku-Siku";
  cout << keliling;
  break;
 }
case '4' :
   cout << "===================Thankyou==============";
}

return 0;
}

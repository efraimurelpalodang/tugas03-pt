#include <iostream>
using namespace std;

int main() {
  unsigned int m;
  float c,k,f,r;
  cout<<"\n*************************************";
  cout<<"\n** SELAMAT DATANG DI APLIKASI KAMI **";
  cout<<"\n*************************************\n";
  cout<<"MENU ===> 1. KONVERSI CELCIUS\n";
  cout<<"          2. KONVERSI FAHRENHEIT\n";
  cout<<"          3. KONVERSI KELVIN\n";
  cout<<"          4. KONVERSI REAMUR\n";
  cout<<"          pilih menu [1-4] : ";
  cin >> m;
  if (m == 1) {
    cout<<"\n====================================";
    cout<<"\n\t KONVERSI CELCIUS";
    cout<<"\n====================================\n";
    cout<<"Masukkan nilai Celcius : ";
    cin >> c;
    f = 1.8 * c + 32;
    k = c + 273.15;
    r = 0.8 * c;
    cout<<"Hasil konversi "<<c<<"c ke fahrenheit adalah : "<<f<<"f\n";
    cout<<"Hasil konversi "<<c<<"c ke Kelvin adalah : "<<k<<"k\n";
    cout<<"Hasil konversi "<<c<<"c ke Reamur adalah : "<<r<<"r\n";
    cout<<"*******************************************************\n";
  } else if (m == 2) {
    cout<<"\n====================================";
    cout<<"\n\t KONVERSI FAHRENHEIT";
    cout<<"\n====================================\n";
    cout<<"Masukkan nilai Fahrenheit : ";
    cin >> f;
    c = (5.0 / 9.0 ) * (f - 32);
    k = c + 273.15;
    r = (4.0 / 9.0) * (f - 32);
    cout<<"Hasil konversi "<<f<<"f ke Celcius adalah : "<<c<<"c\n";
    cout<<"Hasil konversi "<<f<<"f ke Kelvin adalah : "<<k<<"k\n";
    cout<<"Hasil konversi "<<f<<"f ke Reamur adalah : "<<r<<"r\n";
    cout<<"*******************************************************\n";
  } else if (m == 3) {
    cout<<"\n====================================";
    cout<<"\n\t KONVERSI KELVIN";
    cout<<"\n====================================\n";
    cout<<"Masukkan nilai Kelvin : ";
    cin >> k;
    c = k - 273.15;
    f = c * (9.0 / 5.0) + 32;
    r = c * 4.0 / 5.0;
    cout<<"Hasil konversi "<<k<<"k ke Celcius adalah : "<<c<<"c\n";
    cout<<"Hasil konversi "<<k<<"k ke fahrenheit adalah : "<<f<<"f\n";
    cout<<"Hasil konversi "<<k<<"k ke Reamur adalah : "<<r<<"r\n";
    cout<<"*******************************************************\n";
  } else if (m == 4) {
    cout<<"\n====================================";
    cout<<"\n\t KONVERSI REAMUR";
    cout<<"\n====================================\n";
    cout<<"Masukkan nilai reamur : ";
    cin >> r;
    c = r * 1.25;
    f = 2.25 * r + 32;
    k = c + 273.15;
    cout<<"Hasil konversi "<<r<<"r ke Celcius adalah : "<<c<<"c\n";
    cout<<"Hasil konversi "<<r<<"r ke Kelvin adalah : "<<f<<"f\n";
    cout<<"Hasil konversi "<<r<<"r ke Reamur adalah : "<<k<<"k\n";
    cout<<"*******************************************************\n";
  } else {
    cout<<"\n*************** WARNING *********************\n";
    cout<<"NOMOR YANG ANDA MASUKAN TIDAK ADA DI DAFTAR!!";
    cout<<"\n*********************************************";
  }

  return 0;
}
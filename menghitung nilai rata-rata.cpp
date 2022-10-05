#include <iostream>
using namespace std;

int main () {
  float nilai1, nilai2, nilai3, rata_rata;
  string nama, hadiah;

  cout << "Nama siswa : ";
  getline (cin,nama);

  cout << "Nilai Pertandingan I   : ";
  cin >> nilai1;

  cout << "Nilai Pertandingan II  : ";
  cin >> nilai2;

  cout << "Nilai Pertandingan III : ";
  cin >> nilai3;

  rata_rata = (nilai1 + nilai2 + nilai3)/3;

  if (rata_rata >= 85){
    hadiah = "Komputer core i5";
  }
  else {
    if (rata_rata >= 70){
      hadiah = "Uang sebesar Rp.2.500.000";
  }
  else {
      hadiah = "Hiburan";
  }
}
  cout << "Siswa yang bernama " << nama << endl;
  cout << "Memperoleh nilai rata-rata " << rata_rata;
  cout << " dari hasil perlombaan yang diikutinya." << endl;
  cout << "Hadiah yang didapat adalah " << hadiah;
getchar ();
}
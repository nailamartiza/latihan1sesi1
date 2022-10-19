#include <iostream>
using namespace std;

int main (){
  int a, b;
  char ulang;
  
  awal :
  cout << "Masukan Bilangan = ";
  cin >> a;
  b = a % 2;

  cout << "Nilai " << a << " % 2 adalah = " << b;
  cout << "\n\nIngin hitung lagi [Y/T] : ";
  cin >> ulang;
  cout << endl;

  if (ulang == 'Y' || ulang == 'y'){
    goto awal;
  }
   if (ulang == 'T' || ulang == 't'){
    goto akhir;
  }
  akhir :
  return 0;
}
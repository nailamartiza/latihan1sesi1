#include <iostream>
using namespace std;

int main () {
int a,b;
bool bil_prima = true;
 
  cout << "Masukan angka: ";
  cin >> a;
 
  if (a == 0 || a == 1) {
    bil_prima = false;
  }
  else {
    for (b = 2; b <= a / 2; b++) {
      if (a % b == 0) {
        bil_prima = false;
        break;
      }
    }
  }
 
  if (bil_prima)
    cout << a << " termasuk bilangan prima";
  else
    cout << a << " bukan termasuk bilangan prima";
 
 cout << endl;
 return 0;
}
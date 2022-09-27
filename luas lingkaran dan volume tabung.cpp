#include <iostream>
using namespace std;

int main() {
  float r,t, phi, Volume, Luas;
  phi = float (3.14);

  cout << "Masukan jari-jari lingkaran: ";
  cin >> r;
  cout << "Masukan tinggi tabung: ";
  cin >> t;

  Volume = phi*r*r*t;
  Luas = phi*r*r;

  cout << "Volume tabung adalah : "<< Volume << endl;
  cout << "Luas lingkaran adalah : "<< Luas << endl;
}
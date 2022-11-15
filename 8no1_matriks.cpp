#include <iostream>
using namespace std;

int main() {
  int r, c, a[100][100], b[100][100], tambah[100][100], kurang[100][100], kali[100][100], i,j,k, jumlah;
  cout << "Masukan jumlah baris (1-100) = ";
  cin >> r;
  cout << "Masukan jumlah kolom (1-100) = ";
  cin >> c;
  cout << endl << "Masukan matriks pertama: " << endl;

    for (i=0; i<r; i++)
      for (j=0; j<c; j++){
      cout << "Matriks a " << i+1 << j+1 << " = ";
      cin >> a[i][j];
    }
  cout << endl << "Masukan matriks kedua: " << endl;

    for (i=0; i<r; i++)
      for (j=0; j<c; j++){
      cout << "Matriks b " << i+1 << j+1 << " = ";
      cin >> b[i][j];
    }
  
  for (i=0; i<r; i++)
      for (j=0; j<c; j++)
        tambah[i][j] = a[i][j] + b[i][j];

  cout << endl << "Penjumlahan kedua matriks = " << endl;
  for (i=0; i<r; i++)
    for (j=0; j<c; j++){
      cout << tambah[i][j] << " ";
      if (j==c-1)
        cout << endl;
    }

for (i=0; i<r; i++)
      for (j=0; j<c; j++)
        kurang[i][j] = a[i][j] - b[i][j];

  cout << endl << "Penjumlahan kedua matriks = " << endl;
  for (i=0; i<r; i++)
    for (j=0; j<c; j++){
      cout << kurang[i][j] << " ";
      if (j==c-1)
        cout << endl;
    }

   for(i = 0; i < r; i++){
      for(j = 0; j < c; j++){
        for(k = 0; k < r; k++){
          jumlah = jumlah + a[i][k] * b[k][j];
        }
        kali[i][j] = jumlah;
        jumlah = 0;
      }
    }
    cout << endl << "Perkalian kedua matriks = " << endl;
    for(i = 0; i < r; i++){
      for(j = 0; j < c; j++){
        cout << kali[i][j] << " ";
      }
      cout << endl;
    }
  
  
  return 0;
}
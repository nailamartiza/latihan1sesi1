#include <iostream>
using namespace std;

int main(){
    int harga[10],a,i,r[10],jumlah[10],total_harga = 0,harga_akhir,pajak;
    char jenis;
    string tipe[10];
    cout << "GEROBAK FRIED CHICKEN" << endl;
    cout << "----------------------" << endl;
    cout << "Kode\tJenis\tHarga" << endl;
    cout << "----------------------" << endl;
    cout << " D \tDada\t Rp.2500" << endl;
    cout << " P \tPaha\t Rp.2000" << endl;
    cout << " S \tSayap\t Rp.1500" << endl;
    cout << "----------------------" << endl;
    cout << "Banyak Jenis = ";
    cin >> a;

    for (i = 0; i < a; i++){
        cout << "Jenis ke- "<< i+1 << endl;
        ulang:
        cout << "Jenis Potong [D/P/S] : ";
        cin >> jenis;
        if (jenis == 'D'||jenis == 'd'){
            r[i] = 2500;
            tipe[i] = "Dada";
        } else if (jenis == 'P'||jenis == 'p'){
            r[i] = 2000;
            tipe[i] = "Paha";
        } else if (jenis == 'S'||jenis == 's'){
            r[i] = 3500;
            tipe[i] = "Sayap";
        } else {
            cout << "Input invalid.\n";
            goto ulang;
        }
        cout << "Banyak Potong : ";
        cin >> jumlah[i];

        harga[i] = jumlah[i] * r[i];
    }
    cout << endl << "\t\t GEROBAK FRIED CHICKEN "<< endl;
    cout << "-----------------------------------------"<< endl;
    cout << "No.\tJenis\t Harga    Banyak    Jumlah" << endl;
    cout << "\tPotong \tSatuan    Beli      Harga " << endl;
    cout << "-----------------------------------------" << endl;
    for (i = 0 ;i < a;i++){
        cout <<i+1<<"   "<<tipe[i]<<"\t  "<<r[i]<<"     "<<jumlah[i]<<"        Rp." << harga[i]<<endl;
        total_harga += harga[i];
    }
    pajak = total_harga*0.1;
    cout << "-----------------------------------------" << endl;
    cout << "\n\t\t\tHarga total = " << total_harga;
    cout << "\n\t\t\tPajak 10%   = " << pajak;
    cout << "\n\t\t\tTotal Bayar = " << total_harga - pajak;
    return 0;
}
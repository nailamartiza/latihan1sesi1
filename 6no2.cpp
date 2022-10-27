#include<iostream>
#include<string.h>

using namespace std;
int main(){
  
  char kalimat[100], teks_baru[100];
  cout << "Masukan Kalimat : "; cin.getline (kalimat , sizeof (kalimat) );

  cout << "\nHasil Perubahan : ";
  
  int x = strlen(kalimat);
  for(int i=x-1;i>=0;i--){
    cout << kalimat[i];
 }
  
  for (int i=0; i<strlen(kalimat); i++) {
    if(kalimat[i] >= 'a' && kalimat[i] <= 'z'){
      teks_baru[i] = toupper(kalimat[i]);
}
  else{
    teks_baru[i] = tolower(kalimat[i]);
}
}
cout << "\nHasil Perubahan : " << teks_baru << endl;

  getchar ();
}

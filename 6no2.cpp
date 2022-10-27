#include<iostream>
#include<string.h>

using namespace std;
int main(){
  
  char kalimat[100] = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN" , teks_baru[100];

  cout << "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";
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

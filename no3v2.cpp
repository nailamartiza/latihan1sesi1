#include <iostream>
using namespace std;

int main ()
{
  int a, n, jumlah;

  for (a=2; a<=20; a+=2){
    cout << a;
    if (a<20){
      cout << " + ";
    }
  }
    cout << " = ";
  n = 20/2;
  n=n*(n+1);
  cout << n;

getchar ();
}
#include <iostream>
using namespace std;

int main ()
{
  int a, n;

  for (a=1; a<=19; a+=2){
    cout << a;
    if (a<19){
      cout << " + ";
    }
  }
    cout << " = ";
    n=(19+1)/2;
    n=n*n;
    cout<<n;

   getchar();

}

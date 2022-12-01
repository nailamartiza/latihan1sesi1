#include <iostream>
using namespace std;

long int pangkat(int x, int y);

int main(){
	
	int x,y;
	
	cout << "Masukan Nilai X = ";
	cin >> x;
	
	cout << "Masukan Nilai Y = ";
	cin >> y;
	cout << endl;
	cout << x << " Dipangkatkan " << y <<" = "<< pangkat(x,y) << endl;
}

long int pangkat(int x, int y){
	 if (y==0)
		 return 1 ;
		 else 
     return x * pangkat(x,y-1);
} 
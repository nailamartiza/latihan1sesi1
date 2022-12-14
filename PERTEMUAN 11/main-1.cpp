#include <iostream>
using namespace std;

int main() {
  int x, *y;
  y = &x;
  *y = 200;

  cout << *y << " ";
  (*y)++;
  cout << *y << " ";
  (*y)--;
  cout << *y << "\n";

  getchar();
}
#include <iostream>
using namespace std;
// programmai ir jānolasa skaitlis N un jāizvada šis skaitlis pareizināts ar 2
int main() {
  int x;
  int reiz;
  cout << "Ievadi skaitli : ";
  cin >> x;
  
  reiz = x * 2;
  cout << "Skaitļu reizināšana ar 2 ir: " << reiz;
  return 0;
}
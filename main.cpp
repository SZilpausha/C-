#include <iostream>
using namespace std;
// Taisnstūra paralēlskaldņa tilpums
int main() {
  int a, b, c;
  int V;
  cout << "Ievadi a: ";
  cin >> a;
    if (a < 0)
  {
    cout << "Skaiļim jābut pozitīvam!";
  }
    else {
    cout << "Ievadi b: ";
    cin >> b;
    if (b < 0)
  {
    cout << "Skaiļim jābut pozitīvam!";
  }
    else {
    cout << "Ievadi c: ";
    cin >> c;
        }
  if (c < 0)
      {
    cout << "Skaiļim jābut pozitīvam!";
       }
  else {
    V = a * b * c;
    cout << "Taisnstūra paralēlskaldņa tilpums ir: " << V;
    return 0;
        }
  }
        }
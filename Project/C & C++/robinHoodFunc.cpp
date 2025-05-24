#include <iostream>

using namespace std;

void Equilibrio (float* Y, float* X) {
  if (*Y > *X) {
    float resto = *Y - *X;
    float comune = resto / 2;
    *Y = *Y + comune;
    *X = *X + comune;
    cout << "Ora X ha quanto Y" << endl;
  } else if (*X > *Y) {
    float resto = *X - *Y;
    float comune = resto / 2;
    *Y = *Y + comune;
    *X = *X + comune;
    cout << "Ora Y ha quanto X" << endl;
  } else {
    cout << "Il possessi sono uguali" << endl;
  }
}

int main() {

  float tizio_X;
  float tizio_Y;

  Equilibrio (&tizio_Y, &tizio_X);

return 0;
}

#include <iostream>

unsigned long long fact(unsigned long long n){
  if (n == 1)
  {
    return 1;
  }
  return n * fact(n - 1);
}

int main()
{
    std::cout << "Hello" << std::endl;
    std::cout << "Il fattoriale di 10: " << fact(10) << std::endl;
}

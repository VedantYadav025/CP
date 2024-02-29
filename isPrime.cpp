#include <cmath>
#include <iostream>

bool isPrimeHelper(const int& n, int div) {
  if (div <= sqrt(n)) {
    if ((n / div) * div == n) {
      return false;
    } else {
      return isPrimeHelper(n, div + 2);
    }
  }
  return true;
}

bool isPrime(const int& n) {
  if ((n / 2) * 2 == n) return (n == 2);
  return isPrimeHelper(n, 3);
}

int main() {
  int n;
  std::cin >> n;
  std::cout << isPrime(n) << "\n";
  return 0;
}

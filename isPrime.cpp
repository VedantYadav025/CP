#include <cmath>
#include <iostream>

bool isPrimeHelper(int x, int n) {
  if (x >= sqrt(n)) {
    if ((int)(n / x) == (float)n / (float)x) {
      return false;
    } else {
      return isPrimeHelper(x - 1, n);
    }
  }
  return true;
}

bool isPrime(int n) {
  if (!(n & 1)) return (n == 2);
  return isPrimeHelper(n - 1, n);
}

int main() {
  int n;
  std::cin >> n;
  std::cout << isPrime(n) << "\n";
  return 0;
}

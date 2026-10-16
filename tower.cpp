#include <iostream>

int main() {
  unsigned long long N;
  std::cin >> N;

  unsigned long long i = 1;
  unsigned long long floors = 0;

  while (i * i < N) {
    N -= i * i;
    floors += i;
    i++;
  }

  unsigned long long floor = floors + (N - 1) / i + 1;
  unsigned long long room = (N - 1) % i + 1;

  std::cout << floor << ' ' << room;

  return 0;
}
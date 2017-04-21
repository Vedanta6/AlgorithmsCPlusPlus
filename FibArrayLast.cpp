#include <cassert>
#include <iostream>

class Fibonacci {
 public:
  static int get_last_digit(int n) {
    assert(n >= 1);
    int tmp[n];
	for (int i = 0; i < 2; i++) {
		tmp[i] = i;
	};
	for (int i = 2; i != (n + 1); ++i) {
		tmp [i] = (tmp[i-1] + tmp[i-2])%10;
	};
    return tmp[n];
  }
};

int main(void) {
  int n;
  std::cin >> n;
  std::cout << endl << Fibonacci::get_last_digit(n) << std::endl;
  return 0;
} //32 2178309
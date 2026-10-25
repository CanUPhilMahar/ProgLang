#include <iostream>
#include <vector>

int main() {
  {
    std::vector<int> x(10);
    for (int i = -1; i < 9;) {
      x[++i] = 1;
    }
    for (auto a : x) {
      std::cout << a << " ";
    }
  }
  std::cout << std::endl;
  {
    std::vector<int> x(10);
    for (int i = 0; i < 10;) {
      x[i++] = 1;
    }
    for (auto a : x) {
      std::cout << a << " ";
    }
  }
}

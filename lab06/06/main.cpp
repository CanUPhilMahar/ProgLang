#include <chrono>
#include <iostream>

int main() {
  auto start = std::chrono::high_resolution_clock::now();
  std::string a(100000, 'a');
  std::string b(100000, 'b');
  for (int i = 0; i < 1000000; i++) {
    std::string c(std::move(a));
    a = std::move(b);
    b = std::move(c);
    // std::swap(a, b);
  }
  std::cout << a[0] << b[0] << std::endl;
  auto end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> final = end - start;
  std::cout << "Program took " << final.count() << " seconds to end"
            << std::endl;
}

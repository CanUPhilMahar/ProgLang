#include <iostream>

namespace Verity {
void speak() { std::cout << "Hey, It's, It's Verity!" << std::endl; }
} // namespace Verity

namespace IMITity {
void speak() { std::cout << "Привет, это я ИМИТити!" << std::endl; }
} // namespace IMITity

int main() {
  Verity::speak();
  IMITity::speak();
}

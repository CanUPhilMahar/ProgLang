#include <iostream>

int x = 2, y = 3, z = 4;

int main() {
  // from example
  {
    x = x + 1;
    z = z + 2 * x + 3 * y;
    y = y + 1;
    std::cout << "x: " << x << "y: " << "z: " << z << std::endl;
  }
  // using increments
  {
    x++;
    z = z + 2 * x + 3 * y;
    y++;
    std::cout << "x: " << x << "y: " << "z: " << z << std::endl;
  }
}

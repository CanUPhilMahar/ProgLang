#include <iostream>

int main() {
  // from example
  {
    int x = 2, y = 3, z = 4;
    x = x + 1;
    z = z + 2 * x + 3 * y;
    y = y + 1;
    std::cout << "1. x: " << x << " y: " << y << " z: " << z << std::endl;
  }
  // using increments
  {
    int x = 2, y = 3, z = 4;
    z = z + 2 * ++x + 3 * y++;
    std::cout << "2. x: " << x << " y: " << y << " z: " << z << std::endl;
  }
  // using +=
  {
    int x = 2, y = 3, z = 4;
    x += 1;
    z += 2*x + 3*y;
    y += 1;
    std::cout << "3. x: " << x << " y: " << y << " z: " << z << std::endl;
  }
  // using comma
  {
    int x = 2, y = 3, z = 4;
    x++, z+= 2*x + 3*y, y++;
    std::cout << "4. x: " << x << " y: " << y << " z: " << z << std::endl;
  }
}

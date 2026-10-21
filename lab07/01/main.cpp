#include <iostream>

int main() {
  int x = 10, y = 3;
  std::cout << std::min(x = 15, x + y);

  int x = 10, y = 3;
  x = 15, y += x, x += y;

  int x = 10, y = 9;
  if (x > y++ && y++ > 9)
    cout << "yes" << endl;
  cout << y;
}

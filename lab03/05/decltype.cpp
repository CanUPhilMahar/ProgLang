#include <iostream>

int main() {
    int x = 10;
    double y = 2.5;
    decltype(x + y) z = x + y;
    std::cout << z << '\n';
}

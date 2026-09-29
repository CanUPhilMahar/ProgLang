#include <iostream>

int main() {
    int arr[5];

    std::cout << "sizeof(char)   = " << sizeof(char)   << '\n';
    std::cout << "sizeof(int)    = " << sizeof(int)    << '\n';
    std::cout << "sizeof(double) = " << sizeof(double) << '\n';
    std::cout << "sizeof(arr)    = " << sizeof(arr)    << '\n';
    std::cout << "count          = " << sizeof(arr) / sizeof(arr[0]) << '\n';

    int x = 0;
    std::cout << "sizeof(x++)    = " << sizeof(x++) << '\n';
    std::cout << "x after        = " << x << '\n';
}

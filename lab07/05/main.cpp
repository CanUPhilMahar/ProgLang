#include <iostream>

int main(){
    int a = 1, b = 2;
    a, b = b, a;
    std::cout << "a: " << a << " b: " << b;
}

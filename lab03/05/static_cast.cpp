#include <iostream>

class Base {
public:
    virtual ~Base() = default;
};

class Derived : public Base {
public:
    void hello() const {
        std::cout << "Derived::hello\n";
    }
};

int main() {
    Base* b = new Derived();
    Derived* d = static_cast<Derived*>(b);
    d->hello();

    delete b;
}

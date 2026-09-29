#include <iostream>
#include <vector>

typedef std::vector<int> intVec;

int main(){
    intVec v = {1, 2, 3, 4, 5};
    for (auto x: v){
        std::cout << x << " ";
    }
}

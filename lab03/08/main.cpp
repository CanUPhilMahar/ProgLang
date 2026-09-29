#include <iostream>

int main(){
    for (int x = 0; x <= 1; ++x){
        for (int y = 0; y <= 1; ++y){
            for (int z = 0; z <= 1; ++z){
                if ((x == y) + (x == z) == true){
                    std::cout << x << " " << y << " " << z << std::endl;
                }
            }
        }
    }

}

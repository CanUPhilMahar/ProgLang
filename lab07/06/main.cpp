#include <iostream>
#include <chrono>

int main(){
  auto start = std::chrono::high_resolution_clock::now();
  std::string s;
  for (int i=0; i<1000000; i++)
    //s += 'a';
    s = s + 'a';
  std::cout << s.size() << std::endl;
  auto end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> final = end - start;
  std::cout << "Program took " << final.count() << " seconds to end" << std::endl;
}

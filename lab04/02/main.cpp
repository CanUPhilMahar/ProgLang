#include <iostream>
#include <limits>
#include <type_traits>

int main() {
  int dec = 42;
  int neg_dec = -42;

  int oct = 052;
  int oct_zero = 0;

  int hex = 0x2A;
  int hex_upper = 0X2A;
  int hex_big = 0x1A2B3C4D;

  int bin = 0b101010;
  int bin_upper = 0B101010;

  int million = 1'000'000;
  unsigned int hex_sep = 0xFF'FF'FF'FFu;
  int bin_sep = 0b1010'1010;

  unsigned int u = 42u;
  unsigned int U = 42U;

  long l = 42l;
  long L = 42L;

  unsigned long ul = 42ul;
  unsigned long lu = 42lu;

  long long ll = 42ll;
  long long LL = 42LL;

  unsigned long long ull = 42ull;
  unsigned long long llu = 42llu;

  unsigned long hex_ul = 0x2Aul;
  long long oct_ll = 052ll;
  unsigned long long bin_ull = 0b101010ull;

  static_assert(std::is_same<decltype(42), int>::value, "");
  static_assert(std::is_same<decltype(42u), unsigned int>::value, "");
  static_assert(std::is_same<decltype(42l), long>::value, "");
  static_assert(std::is_same<decltype(42ul), unsigned long>::value, "");
  static_assert(std::is_same<decltype(42ll), long long>::value, "");
  static_assert(std::is_same<decltype(42ull), unsigned long long>::value, "");

  std::cout << "dec       = " << dec << '\n';
  std::cout << "oct       = " << oct << " (052)\n";
  std::cout << "hex       = " << hex << " (0x2A)\n";
  std::cout << "bin       = " << bin << " (0b101010)\n";
  std::cout << "million   = " << million << '\n';
  std::cout << "hex_sep   = " << hex_sep << '\n';
  std::cout << "bin_sep   = " << bin_sep << '\n';
  std::cout << "u = " << u << ", l = " << l << ", ul = " << ul
            << ", ll = " << ll << ", ull = " << ull << '\n';

  std::cout << "INT_MAX   = " << std::numeric_limits<int>::max() << '\n';
  std::cout << "INT_MIN   = " << std::numeric_limits<int>::min() << '\n';
  std::cout << "UINT_MAX  = " << std::numeric_limits<unsigned int>::max()
            << '\n';
}

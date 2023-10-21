#include <iostream>
// all of these are signed by default

short s;
int i;
long l;
long long ll;

// but you could do this even though it's redundant:
signed int x;

int main() {
  // assume 4 byte integer
  int x {2'147'483'647};
  std::cout << x << "\n";

  x++;
  // will print that the core has been dumped and its illegal
  std::cout << x << "\n";

  return 0;
}

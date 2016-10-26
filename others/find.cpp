#include <iostream>     // std::cout
#include <algorithm>    // std::find
//#include <vector>       // std::vector
using namespace std;
int main () {
  // using std::find with array and pointer:
  int myints[] = { 10, 20, 30, 40 };
  int * p;
int mul=50;
  p = find (myints, myints+4, mul);
  if (p != myints+4)
    cout << "Element found in myints: " << *p << '\n';
  else
    cout << "Element not found in myints\n";
}

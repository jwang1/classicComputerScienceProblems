
#include <iostream>

using namespace std;


int fib(int n) {
  if (n < 2) {
    return n;
  }

  return fib(n - 2) + fib(n - 1);
}



int main(int argc, char *argv[]) {

  cout << "argc = " << argc << " argv[0]=" << argv[0] << endl;

  int nbr = 50;

  if (argc > 1) {
    nbr = stoi(argv[1]);
  }

  ::cout << "fib of " << nbr << " is: " 
         << fib(nbr) << ::endl;
}


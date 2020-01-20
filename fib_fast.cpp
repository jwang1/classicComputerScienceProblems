
#include <iostream>

using namespace std;

long fib_fast(int n) {
  if (n < 2) {
    return n;
  }

  long last = 0;
  long next = 1;

  long tmp;

  for (int i = 1; i < n; i++) {
    tmp = last;
    last = next;
    next = tmp + next; 

    cout << "intemediate: i=" << i << ", rslt=" << next << endl;
  }

  return next;

}

int main(int argc, char* argv[]) {
  int nbr = 50;

  if (argc > 1) {
    nbr = stoi(argv[1]);
  }

  cout << "fibonacci for " << nbr << " is " << fib_fast(nbr) << endl;
}

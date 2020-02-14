#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std; 

double doubleRand() {
	return double ((rand() / (float)RAND_MAX * 19) + 1.0);
}

int main() {
  srand(static_cast<unsigned int>(clock()));
  cout << "se asteapta 10 numere din intervalul [0.0, 20.0)" << endl;
  for (int i=0; i < 100; i++) {
    cout << doubleRand() << " ";
  }
}
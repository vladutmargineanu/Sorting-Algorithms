#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std; 


int main() {
const int maximum_number = 10000;
const int minimum_number = -10000;
unsigned int i;
for (i = 0; i < 10000; i++) {
    const int new_number = (rand() % (maximum_number + 1 - minimum_number)) + minimum_number;
    cout << new_number << " ";
}
}
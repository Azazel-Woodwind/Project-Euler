#include <iostream>
#include "../Utils/isPrime.h"

using namespace std;

int main() {
    long sum = 0;
    for (long i = 1; i < 2000000; ++i) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    cout << sum;
}
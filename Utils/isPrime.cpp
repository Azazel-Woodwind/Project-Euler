#include <iostream>
#include <math.h>

// Returns true if x is prime, false if not

bool isPrime(int x) {
    if (x == 2) {
        return true;
    }
    if (x % 2 == 0 or x == 1) {
        return false;
    }
    int i;
    for (i = 3; i <= std::sqrt(x); i = i + 2) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}
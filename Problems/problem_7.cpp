#include <iostream>
#include "../Utils/isPrime.h"

using namespace std;

int main() {
    int count = 0;
    for (int i = 1; ; ++i) {
        if (isPrime(i)) {
            ++count;
        }
        if (count == 10001) {
            cout << i;
            break;
        }
    }
    return 0;
}
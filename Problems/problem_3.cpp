#include <iostream>

using namespace std;

int main() {
    long num = 600851475143, i = 2, factor;
    while (num > 1) {
        if (num % i == 0) {
            num /= i;
            factor = i;
        }
        else {
            ++i;
        }
    }
    cout << factor;
    return 0;
}
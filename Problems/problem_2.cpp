#include <iostream>

using namespace std;

int main() {
    int a = 1, b = 2, sum = 2, temp;
    while (b < 4000000) {
        temp = b;
        b += a;
        a = temp;
        if (b % 2 == 0) {
            sum += b;
        }
    }
    cout << sum;
    return 0;
}
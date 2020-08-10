#include <iostream>

using namespace std;

int main() {
    long sum;
    long product;
    for (int a = 1; a <= 997; ++a) {
        for (int b = 1; b <= 997; ++b) {
            for (int c = 1; c <= 997; ++c) {
                if (a * a + b * b == c * c) {
                    if (a + b + c == 1000) {
                        product = a * b * c;
                        cout << product << endl;
                    }
                }
            }
        }
    }
}
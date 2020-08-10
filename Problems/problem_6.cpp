#include <iostream>

using namespace std;

long long square_of_sum() {
    long long sum = 100 * 101;
    sum /= 2;
    return sum * sum;
}

long long sum_of_squares() {
    long long sum = 0, square;
    for (int i = 1; i <= 100; ++i) {
        square = (i * i);
        sum += square;
    }
    return sum;
}


int main() {
    long long a = square_of_sum();
    long long b = sum_of_squares();
    long long c = a - b;
    cout << c;
    return 0;
}
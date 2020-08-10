#include <iostream>

using namespace std;

int main() {
    long long chain, count = 0, longest = 0, number;
    for (long long i = 2; i < 1000000; ++i) {
        chain = i;
        while (chain != 1) {
            if (chain % 2 == 0) {
                chain /= 2;
            }
            else {
                chain = chain * 3 + 1;
            }
            count++;
        }
        if (count > longest) {
            longest = count;
            number = i;
        }
        count = 0;
    }
    cout << number << endl;
    return 0;
}
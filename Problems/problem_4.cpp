#include <iostream>
#include <algorithm>

using namespace std;

bool isPalindrome(int num) {
    int rev = 0, temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (rev == num) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int biggest = 0, i, x, num;
    for (i = 100; i <= 999; ++i) {
        for (x = 100; x <= 999; ++x) {
            num = i * x;
            if (isPalindrome(num)) {
                if (num > biggest) {
                    biggest = num;
                }
            }
        }
    }
    cout << biggest;
    return 0;
}
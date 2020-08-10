#include <iostream>

using namespace std;

int main() {
    bool isNum;
    for (long long i = 20; ;++i) {
        isNum = true;
        for (int x = 11; x <= 20; ++x) {
            if (i % x != 0) {
                isNum = false;
                break;
            }
        }
        if (isNum) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
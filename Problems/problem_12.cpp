#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int count = 0;
    long long triangNum = 1;
    for (long long num = 2 ; ; ++num) {
        triangNum += num;
        auto root = sqrt(triangNum);
        for (long long x = 1; x <= root; ++x) {
            if (triangNum % x == 0) {
                count += 1;
            }
        }
        count *= 2;
        if (root == int(root)) {
            count -= 1;
        }
        if (count > 500) {
            cout << triangNum << endl;
            break;
        }
        cout << "tri num: " << triangNum << endl;
        cout << "factors: " << count << endl;
        count = 0;
    }
    return 0;
}
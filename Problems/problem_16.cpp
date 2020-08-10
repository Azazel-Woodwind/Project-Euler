#include <iostream>
#include <math.h>
#include <string>
#include "../Utils/string_add.h"

using namespace std;

int main() {
    int count = 1;
    string sum = "2";
    while (count != 1000) {
        sum = string_add(sum, sum);
        count++;
    }
    int num_sum = 0;
    for (char i : sum) {
        num_sum += (i - '0');
    }
    cout << num_sum;
    return 0;
}
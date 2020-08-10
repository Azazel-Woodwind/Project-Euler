#include <string>

using namespace std;

string string_add(string n1, string n2) {
    while (n1.size() < n2.size()) {
        n1 = "0" + n1;
    }
    while (n2.size() < n1.size()) {
        n2 = "0" + n2;
    }
    string sum;
    int num, digit1, digit2;
    bool carry = false;
    char char1, char2;
    for (int i = n1.size() - 1; i >= 0; --i) {
        char1 = n1[i];
        char2 = n2[i];
        digit1 = char1 - '0';
        digit2 = char2 - '0';
        num = digit1 + digit2;
        if (carry) {
            num++;
            carry = false;
        }
        if (num >= 10) {
            carry = true;
            num -= 10;
        }
        sum = to_string(num) + sum;
    }
    if (carry) {
        sum = "1" + sum;
    }
    return sum;
}
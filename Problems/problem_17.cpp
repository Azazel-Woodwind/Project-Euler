#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
    vector<string> single_names = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> teen_names = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    vector<string> ten_names = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    vector<string> hundred_names = {"", "onehundred", "twohundred", "threehundred", "fourhundred", "fivehundred", "sixhundred", "sevenhundred", "eighthundred", "ninehundred"};
    vector<vector<string>> stuff;
    stuff.push_back(single_names);
    stuff.push_back(ten_names);
    stuff.push_back(hundred_names);
    int count, temp, tens, sum = 0, letters = 0;
    for (int i = 1; i <= 999; ++i) {
        count = 0;
        letters = 0;
        temp = i;
        while (temp > 0) {
            tens = temp % 100;
            if (tens >= 11 && tens <= 19 && count == 0) {
                letters += teen_names[temp % 10 - 1].size();
                temp /= 100;
                count += 2;
                continue;
            }
            letters += stuff[count][temp % 10].size();
            temp /= 10;
            count++;
        }
        if (i > 100 && i % 100 != 0) {
            letters += 3;
        }
        sum += letters;
    }
    sum += 11;
    cout << sum << endl;
    return 0;
}
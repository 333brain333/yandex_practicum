// Самостоятельно впишите нужные #include.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> tens_names = {"twenty"s, "thirty"s, "fourty"s, "fifty"s, 
                                 "sixty"s, "seventy"s, "eighty"s, "ninety"s};

    vector<string> num_names = { "zero"s, "one"s, "two"s, "three"s, "four"s, "five"s, 
                                 "six"s, "seven"s, "eight"s, "nine"s, "ten"s, "eleven"s, 
                                 "twelve"s, "thirteen"s, "fourteen"s, "fifteen"s, 
                                 "sixteen"s, "seventeen"s, "eighteen"s, "nineteen"s};
    int number;
    cin >> number;

    // Вычислим единицы и десятки как остаток и частное:
    int units = number % 10;
    int tens = number / 10;
    // for the first 20 numbers
    if (tens == 0 || tens == 1) {
        cout << num_names[number];
    }
    // for the next numbers that has 0 at the end
    else if (units == 0) {
        cout << tens_names[tens-2];
    }
    // for the all over numbers
    else {
        cout << tens_names[tens-2] << '-' << num_names[units] << endl;
    }

    // Выведите число, используя векторы, которые даны выше.
    // Если число меньше 20, то выведите элемент из num_names.
    // Иначе, если единицы равны нулю, то выведите элемент tenth_names.
    // Иначе выведите через дефис значения из tenth_names и num_names. 
}

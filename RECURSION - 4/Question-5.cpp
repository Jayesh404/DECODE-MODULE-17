#include <iostream>
#include <string>
using namespace std;

string decimalToBinary(int n) {
    if (n == 0) {
        return "";
    }
    return decimalToBinary(n / 2) + (n % 2 == 0 ? "0" : "1");
}

int main() {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;

    if (number == 0) {
        cout << "Binary representation: 0" << endl;
    } else {
        cout << "Binary representation: " << decimalToBinary(number) << endl;
    }

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int n, int size, int i = 0) {
    if (i == size) {
        return 0;
    }
    return ((n % 10) * pow(2, i)) + binaryToDecimal(n / 10, size, i + 1);
}

int main() {
    int binaryNumber = 0111; // Binary representation of 23
    int size = 5; // Size of the binary number
    cout << binaryToDecimal(binaryNumber, size);
    return 0;
}

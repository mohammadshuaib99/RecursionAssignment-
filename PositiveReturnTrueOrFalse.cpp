#include <iostream>

bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false;
    }
    return (n & (n - 1)) == 0;
}

int main() {
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    bool result = isPowerOfTwo(number);

    if (result) {
        std::cout << number << " is a power of 2." << std::endl;
    } else {
        std::cout << number << " is not a power of 2." << std::endl;
    }

    return 0;
}

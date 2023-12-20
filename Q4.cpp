#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;
    while (N <= 1) {
        cout << "Please enter a positive integer greater than 1: ";
        cin >> N;
    }
    int largestPrime = 0;
    int currentNumber = N;

    while (currentNumber >= 2) {
        bool isPrime = true;
        for (int i = 2; i * i <= currentNumber; ++i) {
            if (currentNumber % i == 0) {
                isPrime = false;
                break;} }
        if (isPrime) {
            largestPrime = currentNumber;
            break;}
        --currentNumber;
    }
    cout << "The largest prime number less than or equal to " << N << " is: " << largestPrime << endl;
    return 0;
}


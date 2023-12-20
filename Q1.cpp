#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    if (str1 == str2) {
        size_t length = str1.length();
        for (size_t i = 0; i < length / 2; ++i) {
            swap(str1[i], str1[length - i - 1]);
        }
        cout << "Strings are now unequal:\n";
        cout << "String 1: " << str1 << '\n';
        cout << "String 2: " << str2 << '\n';
    } else {
        cout << "Strings are already unequal.\n";
    }
    return 0;
}





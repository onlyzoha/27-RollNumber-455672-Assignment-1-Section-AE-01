#include <iostream>

using namespace std;

int main() {
     string inputString;

    cout << "Enter a string with lowercase and uppercase characters: ";
    cin >> inputString;
    string resultString;
    for (size_t i = 0; i < inputString.length(); ++i) {
        char ch = inputString[i];
        char lowerCh = tolower(ch);
        if (resultString.find(lowerCh) == string::npos) {
            resultString.push_back(ch);
        }
    }
    cout << "Resultant String: " << resultString << endl;

    return 0;
}








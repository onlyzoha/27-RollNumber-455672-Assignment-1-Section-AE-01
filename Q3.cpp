
#include <iostream>

using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int originalSize = sizeof(a) / sizeof(a[0]);
    int newSize = originalSize + 3;  // Adding 3 more elements
    int newArray[newSize];
    for (int i = 0; i < originalSize; ++i) {
        newArray[i] = a[i];
    }
    newArray[originalSize] = 6;
    newArray[originalSize + 1] = 7;
    newArray[originalSize + 2] = 8;
    cout << "Elements in the array:\n";
    for (int i = 0; i < newSize; ++i) {
        cout << newArray[i] << " ";
    }

    cout << endl;

    return 0;
}





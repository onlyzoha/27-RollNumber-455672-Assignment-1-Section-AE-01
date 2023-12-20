#include <iostream>
using namespace std;

int main() {
    int temp, i, j;
    int x[6] = {14, 2, 9, 1, 89, 24};
    for (int i = 0; i <= 5; i++) {
        for (int j = i + 1; j <= 5; j++) {
            if (x[i] > x[j]) {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for (int k = 0; k <= 5; k++)
        cout << x[k] << endl;

    return 0;
}




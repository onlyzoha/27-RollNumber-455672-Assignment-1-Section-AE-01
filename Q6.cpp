#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int numItems;
    double itemPrice, taxRate, totalCost = 0.0;

    // Get the number of items from the user
    cout << "Enter the number of items purchased: ";
    cin >> numItems;

    // Validate user input
    while (numItems <= 0) {
        cout << "Please enter a valid number of items (greater than 0): ";
        cin >> numItems;
    }

    // Get the price and tax rate for each item
    for (int i = 1; i <= numItems; ++i) {
        cout << "Enter the price for item " << i << ": $";
        cin >> itemPrice;

        // Validate price (assuming prices are non-negative)
        while (itemPrice < 0) {
            cout << "Please enter a valid price (non-negative): $";
            cin >> itemPrice;
        }

        totalCost += itemPrice;
    }

    // Get the tax rate from the user
    cout << "Enter the tax rate (in percentage): ";
    cin >> taxRate;

    // Validate tax rate
    while (taxRate < 0) {
        cout << "Please enter a valid tax rate (non-negative): ";
        cin >> taxRate;
    }

    // Calculate the total cost including tax
    double taxAmount = totalCost * (taxRate / 100.0);
    double finalCost = totalCost + taxAmount;

    // Display the results
    cout << "Total cost of items: $" << totalCost << endl;
    cout << "Tax amount: $" << taxAmount << endl;
    cout << "Final cost (including tax): $" << finalCost << endl;

    return 0;
}



#include <iostream>
using namespace std;

int main() {
    // Define the quantities and prices
    int numNotebooks = 15;
    int numPens = 20;
    double pricePerNotebook = 2.25;
    double pricePerPen = 0.75;

    // Calculate the total cost
    double totalCostNotebooks = numNotebooks * pricePerNotebook;
    double totalCostPens = numPens * pricePerPen;
    double totalCost = totalCostNotebooks + totalCostPens;

    // Output the total cost
    cout << "The total cost of the supplies is Rs. " << totalCost << endl;

    return 0;
}

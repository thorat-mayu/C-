#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Predefined list of numbers
    vector<int> numbers = {15, 28, 37, 46, 55, 62, 79};

    // Variables to store sum, count of evens, and count of odds
    int sum = 0, evenCount = 0, oddCount = 0;

    // Loop through the list to analyze numbers
    for (int num : numbers) {
        sum += num;  // Add to sum
        if (num % 2 == 0) {
            ++evenCount;  // Increment even count
        } else {
            ++oddCount;   // Increment odd count
        }
    }

    // Calculate average
    double average = static_cast<double>(sum) / numbers.size();

    // Display the results
    cout << "List of Numbers: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\n\nAnalysis Results:" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Count of Even Numbers: " << evenCount << endl;
    cout << "Count of Odd Numbers: " << oddCount << endl;

    return 0;
}
Output =

List of Numbers: 15 28 37 46 55 62 79 

Analysis Results:
Sum: 322
Average: 46
Count of Even Numbers: 3
Count of Odd Numbers: 4

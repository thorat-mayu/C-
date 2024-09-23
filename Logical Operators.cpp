#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 0; // Changed values of a and b
    // Logical AND operator
    cout << "a && b is " << (a && b) << endl;
    // Logical OR operator
    cout << "a || b is " << (a || b) << endl;
    // Logical NOT operator
    cout << "!b is " << (!b) << endl;

    return 0;
}
Output =
a && b is 0
a || b is 1
!b is 1


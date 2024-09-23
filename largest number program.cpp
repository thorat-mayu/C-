#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Put any three numbers: " << endl;
    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        cout << "The Largest number is: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "The Largest number is: " << b << endl;
    } else {
        cout << "The Largest number is: " << c << endl;
    }

    return 0;
}

Output:

Put any three numbers: 9 4 265
The Largest number is: 265

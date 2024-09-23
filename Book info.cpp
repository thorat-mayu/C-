#include <iostream>
using namespace std;

int main() {
    // Variable declaration and initialization
    string bookTitle = "The Alchemist"; // String variable for the book title
    string author = "Paulo Coelho"; // String variable for the author's name
    int yearOfPublication = 2003; // Integer variable for the year of publication
    double price = 349.50; // Double variable for the price in Rupees
    bool isAvailable = true; // Boolean variable for availability

    // Display the book information
    cout << "Book Title: " << bookTitle << endl;
    cout << "Author: " << author << endl;
    cout << "Year of Publication: " << yearOfPublication << endl;
    cout << "Price: " << price << " Rs." << endl;
    cout << "Availability: " << (isAvailable ? "Yes" : "No") << endl;

    return 0;
}

Output =
Book Title: The Alchemist
Author: Paulo Coelho
Year of Publication: 2003
Price: 349.50 Rs.
Availability: Yes

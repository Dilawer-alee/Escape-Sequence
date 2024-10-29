#include <iostream>
#include <iomanip> // Include the iomanip library
using namespace std;

int main() {
    double price1 = 12.99;
    
    cout << left << setw(10) << "Item"
         << right << setw(10) << "Price" << endl;
    cout << left << setw(10) << "Item 1"
         << fixed << setprecision(2) << right
         << setw(10) << price1 << endl;
    
    return 0;
}


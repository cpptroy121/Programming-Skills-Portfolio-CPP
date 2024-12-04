#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[] = {"Jake", "Zac", "Tan", "Ron", "Sam", "Dave"};
    string search_term;
    bool found = false;

    // Allow user input
    cout << "Enter the name to search: ";
    cin >> search_term;

    // Search for the term
    for (int i = 0; i < 6; i++) {  // Traditional for loop
        if (names[i] == search_term) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << search_term << " was found in the array." << endl;
    } else {
        cout << search_term << " was not found in the array." << endl;
    }

    return 0;
}


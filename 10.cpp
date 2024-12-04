#include <iostream>
using namespace std;

// Function to determine if the number is even or odd
string checkEven(int number) {
    if (number % 2 == 0) {
        return "The provided number is even";
    } else {
        return "The provided number is odd";
    }
}

int main() {
    int user_number;

    // Get number from the user
    cout << "Enter a number: ";
    cin >> user_number;

    // Call the checkEven function and print the result
    string result = checkEven(user_number);
    cout << result << endl;

    return 0;
}

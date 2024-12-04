#include <iostream>
#include <string>
using namespace std;

int main() {
    string correct_password = "12345";
    string user_input;
    int max_attempts = 5, attempts = 0;

    while (attempts < max_attempts) {
        cout << "Enter the password: ";
        cin >> user_input;
        attempts++;

        if (user_input == correct_password) {
            cout << "Welcome to the Secure Area" << endl;
            break;
        } else {
            int remaining_attempts = max_attempts - attempts;
            if (remaining_attempts > 0) {
                cout << "Incorrect password. You have " << remaining_attempts << " attempts remaining." << endl;
            } else {
                cout << "Too many failed attempts. The authorities have been alerted!" << endl;
            }
        }
    }
    return 0;
}

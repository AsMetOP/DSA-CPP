#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "It's a lowercase letter." << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << "It's an uppercase letter." << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << "It's a digit." << endl;
    } else {
        cout << "It's a special character." << endl;
    }

    return 0;
}

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    int flag = 0; // 0 means prime until proven otherwise

    if (n <= 1) {
        flag = 1; // numbers <= 1 are not prime
    } else {
        int i = 2;
        while (i < n) {
            if (n % i == 0) {
                flag = 1; // found a divisor → not prime
                break;
            }
            i++;
        }
    }

    if (flag == 0) {
        cout << "It's a prime number";
    } else {
        cout << "It's not a prime number";
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int sum = 0;
    int i = 1 ;
    while(i<=n){
        sum += i;
        i = i+1;
    }
    cout << sum <<endl;

    return 0;
}

#include<iostream>
using namespace std;

int main(){
    double f, c;
    cout << "Enter Fahrenheit Degree:";
    cin >> f;
    c = ((f-32)*5)/9;
    cout << c <<endl;

    return 0;
}
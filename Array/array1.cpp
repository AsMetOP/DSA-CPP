//Fill entire Array

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int array[10];
    fill(array, array+10, 5);
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
}
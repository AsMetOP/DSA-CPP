#include<iostream>

using namespace std;
int main(){
    int array[5] = {1,2,3,4,5};
    cout << array[0] << " "; 
    cout << array[3] << " "; 

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i]; //takes input
    }
    for(int i = 0; i < n; i++) {
    cout << arr[i] << " "; // prints the input
}
    int hmm[5] = {1,2,3,4,5};
    cout << &hmm[0] << endl; //0x61fed4
    cout << &hmm[1] << endl; //0x61fed8

}

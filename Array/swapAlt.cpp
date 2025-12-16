#include<iostream>
using namespace std;
int main(){
    int size;
    cout<< "Enter the size of the array:";
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    for(int i=0; i < size; i = i+2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
    cout << "Array after swapping: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
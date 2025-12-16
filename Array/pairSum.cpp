#include<iostream>
using namespace std;

int pairSum(int *arr, int size, int sum){
    for(int i=0; i< size;i++){
        for(int j = i+1; j<size; j++){
            if(arr[i]+arr[j]==sum){
                cout << min(arr[i], arr[j]) << " "
                     << max(arr[i], arr[j]) << endl;
            }
        }
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    cout << pairSum(arr,5,5);
}
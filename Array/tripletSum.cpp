#include<iostream>
using namespace std;

void tripletSum(int *arr, int size, int sum){
    for(int i=0; i< size;i++){
        for(int j = i+1; j<size; j++){
            for(int k=j+1; k<size; k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    int a = arr[i], b = arr[j], c = arr[k];
                    int mini = min(a, min(b,c));
                    int maxi = max(a, max(b,c));
                    cout << mini<< " "<< maxi<< endl;
                }
            }
        }
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    tripletSum(arr,5,9);
    return 0;
}
#include<iostream>
using namespace std;

int peakIndexMountainArray(int arr[], int size){
    int start = 0 , end = size-1;
    int mid = start + (end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int main(){
    int arr[6] = {0,1,2,4,8};
    cout << peakIndexMountainArray(arr, 6);
}
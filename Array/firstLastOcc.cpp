#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int start = 0, end = size-1;
    int ans = -1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        //If key is > then go to the right part
        else if(key > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        mid = start+(end-start)/2;;
    }
    return ans;
}
int lastOcc(int arr[], int size, int key){
    int start = 0, end = size-1;
    int ans = -1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        //If key is > then go to the right part
        else if(key > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int main(){
    int arr[7]= {2,4,4,4,8,9,10};

    int firstOccerence = firstOcc(arr, 7, 4);
    cout << " firstOcc of 4 is at index : " << firstOccerence << endl;

    int lastOccerence = lastOcc(arr, 7, 4);
    cout << " lastOcc of 4 is at index : " << lastOccerence << endl;

    int totalOccurence = (lastOccerence-firstOccerence)+1;
    cout << "Total Number of Occurences : "<< totalOccurence << endl;
}
#include <iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s = 0, e = n - 1;

    while(s < e){
        int mid = s + (e - s) / 2;

        if(arr[mid] >= arr[0]){
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int key){
    while(s <= e){
        int mid = s + (e - s) / 2;

        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {7, 8, 1, 3, 5};
    int n = 5;
    int k = 3;

    int pivot = getPivot(arr, n);
    int ans;

    if(k >= arr[pivot] && k <= arr[n - 1]){
        ans = binarySearch(arr, pivot, n - 1, k);
    }
    else{
        ans = binarySearch(arr, 0, pivot - 1, k);
    }

    cout << "Index of key: " << ans << endl;
    return 0;
}

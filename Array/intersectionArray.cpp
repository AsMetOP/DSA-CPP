#include <iostream>
using namespace std;

void intersectionArray(int *arr, int *arr1, int n, int m) {
    for(int i = 0; i < n; i++) {
        int element = arr[i];
        for(int j = 0; j < m; j++) {
            if(element == arr1[j]) {
                cout << element << " ";
                arr1[j] = -1;
                break;
            }
        }
    }
}

int main() {
    int arr[]  = {1, 2, 2, 3};
    int arr1[] = {2, 2, 4};
    intersectionArray(arr, arr1, 4, 3);
    return 0;
}

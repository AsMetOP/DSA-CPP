//MAX & MIN
#include<iostream>
using namespace std;
int main(){
    int n;
    int max = INT32_MIN;
    int min = INT32_MAX;
    cin >>n;
    int arr[n];
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
        if(arr[i]> max){
            max = arr[i];
        }
        if(arr[i]< min){
            min = arr[i];
        }
    }
    cout << "Maximum is " << max << " ";
    cout << "Minimum is " << min;
}
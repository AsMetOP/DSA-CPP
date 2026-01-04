#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(const vector<int>& arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {

        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } 
        else {
            studentCount++;

            if (studentCount > m || arr[i] > mid) {
                return false;
            }

            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(const vector<int>& arr, int n, int m) {
    if (m > n) return -1;   // edge case

    int s = *max_element(arr.begin(), arr.end());
    int e = 0;

    for (int i = 0; i < n; i++) {
        e += arr[i];
    }

    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;   // try smaller answer
        } 
        else {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {10, 20, 30, 40};
    int n = arr.size();
    int m = 2;

    int result = allocateBooks(arr, n, m);
    cout << "Minimum maximum pages: " << result << endl;

    return 0;
}

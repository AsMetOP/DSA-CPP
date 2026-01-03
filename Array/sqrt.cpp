#include <iostream>
using namespace std;

int sqrtInt(int key){
    int s = 0;
    int e = key;
    int ans = -1;

    while(s <= e){
        int mid = s + (e - s) / 2;
        long long square = 1LL * mid * mid;  // prevent overflow

        if(square == key){
            return mid;
        }
        else if(square > key){
            e = mid - 1;
        }
        else{
            ans = mid;       // store possible answer
            s = mid + 1;
        }
    }
    return ans;
}

int main(){
    int key = 25;
    cout << sqrtInt(key);
    return 0;
}

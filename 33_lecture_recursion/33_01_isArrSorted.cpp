#include <iostream>
using namespace std;

bool isSortedArr(int arr[], int size) {

    // base case
    if (size == 0 || size == 1) return true;

    if (arr[0] > arr[1]) {
        return false;
    } else {
        return isSortedArr(arr+1, size-1);
    }
}

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    bool ans = isSortedArr(arr, size);
    cout << ans << endl;
    return 0;
}
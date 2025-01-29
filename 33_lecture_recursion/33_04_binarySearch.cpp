#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key) {

    // base case
    if (s > e) return false;

    int mid = s + (e-s)/2;

    if (arr[mid] == key) return true;

    if (arr[mid] > key) {
        return binarySearch(arr, s, mid, key);
    } else {
        return binarySearch(arr, mid+1, e, key);
    }

}

int main() {

    int arr[] = {1, 4, 8, 10, 17};
    int size = 5;
    int key = 107;

    bool ans = binarySearch(arr, 0, size, key);
    cout << ans << endl;
    return 0;
}
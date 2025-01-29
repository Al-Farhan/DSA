#include <iostream>
using namespace std;

bool isPresent(int *arr, int size, int key) {

    // base case
    if (size == 0) return false;
    
    if (arr[0] == key) return true;

    return isPresent(arr+1, size-1, key);
}

int main() {

    int arr[] = {3, 6, 8, 10};

    int size = 4;
    int key = 100;

    bool ans = isPresent(arr, size, key);
    cout << ans << endl;
    return 0;
}
#include <iostream>
using namespace std;

void insertionSort(int arr[], int index, int size) {

    // base case start
    if (size == 0 || size == 1) return;

    // 1 case
    for(int i=index; i>0; i--) {
        int temp = arr[i];
        if (temp < arr[i-1]) {
            swap(arr[i], arr[i-1]);
        }
    }

    insertionSort(arr, index+1, size-1);
}

int main() {

    int arr[5] = {5, 7, 2, 0, 4};
    int size = 5;
    insertionSort(arr, 1, size);

    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
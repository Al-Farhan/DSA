#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i=0; i<size-1; i++) {
        bool isSwap = false;
        for (int j=0; j<size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if (!isSwap) {
            break;
        }
    }
}

int main() {
    int arr[] = {1, 4, 3, 10, 5};
    bubbleSort(arr, 5);

    for (int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    int temp = 0;
    for (int i=1; i<size; i++) {

        for (int j=i; j>0; j--) {
            temp = arr[j];
            if (temp < arr[j-1]) {
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

int main() {

    int arr[] = {3, 5, 4, 9, 1, 0};
    int size = 6;

    insertionSort(arr, size);

    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
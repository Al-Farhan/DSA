#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {

    // base case start
    if (size == 0 || size == 1) {
        return;
    }
    // base case end

    //1 case slove kar liya - largest element ko end me rakh dega
    for(int i=0; i<size-1; i++) {
        if (arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }

    bubbleSort(arr, size-1);
}

int main() {

    int arr[5] = {3, 7 , 1, 6, 9};
    int size = 5;

    bubbleSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    

    return 0;
}
#include <iostream>
using namespace std;

void printArr(int arr[], int size, int start=0) {
    for (int i = start; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[5] = {1, 2, 4, 5, 6};

    int size = 5;

    printArr(arr, size);
    
    return 0;
}
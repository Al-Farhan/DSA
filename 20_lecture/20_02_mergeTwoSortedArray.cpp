#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {
    int i=0, j=0;
    int k=0;

    while (i<n && j<m) {
        if (arr1[i] <= arr2[j]) {
            arr3[k] = arr1[i];
            i++;
            k++;
        } else {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (i<n)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    
    while (j<m)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main() {

    int arr1[] = {1, 3, 5, 6, 9};
    int arr2[] ={2, 4, 7};
    int n=5;
    int m=3;
    int arr3[] = {0};

    merge(arr1, n, arr2, m, arr3);

    print(arr3, 8);
    return 0;
}
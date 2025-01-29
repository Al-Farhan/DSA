#include <iostream>
using namespace std;

int main() {

    int arr[10] = {1, 4, 7};

    cout << "Address of arr (arr): " << arr << endl;
    cout << "Address of arr: (&arr[0])" << &arr[0] << endl;

    cout << "*arr: " << *arr << endl;

    cout << "*arr + 1: " << *arr + 1 << endl;
    cout << "*(arr + 1): " << *(arr + 1) << endl;

    return 0;
}
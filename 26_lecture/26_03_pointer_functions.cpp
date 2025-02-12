#include <iostream>
using namespace std;

void print(int *p) {
    cout << p << endl;
}

void update(int *p) {
    *p = *p + 1;
}

int getSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i]; 
    }
    return sum;
}

int main() {

    int value = 5;
    int *p = &value;

    // print(p);

    cout << "Before update: " << value << endl;
    update(p);
    cout << "After update: " << value << endl;

    int arr[6] = {1, 2, 3, 4, 5, 6};

    cout << "Sum of arr: " << getSum(arr + 2, 5) << endl;

    return 0;
}
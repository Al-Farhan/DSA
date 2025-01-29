#include <iostream>
using namespace std;

int main() {

    int arr[4] = {0,1,0,1};

    int i=0, j=3;

    while(i<j) {

        while(arr[i] == 0 && i<j) {
            i++;
        } 

        while (arr[j] == 1 && i<j) {
            j--;
        }

        swap(arr[i], arr[j]);
        /*
        if (arr[i] == 1 && arr[j] ==0) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        } else if (arr[i] == 1 && arr[j] == 1) {
            j--;
        } else if (arr[i] == 0 && arr[j] == 0) {
            i++;
        } else {
            i++;
            j--;
        }
        */
    }

    for (int i=0; i<4; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
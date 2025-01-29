#include <iostream>
using namespace std;

int main () {

    int a = 10;
    int *ptr = &a;
    int **ptr2 = &ptr;

    cout << "Printing ptr: " << ptr << endl;
    cout << "Printing ptr2: " << ptr2 << endl;

    cout << "Printing *ptr2: " << *ptr2 << endl;
    cout << "Printing **ptr2: " << **ptr2 << endl; 

    return 0;
}
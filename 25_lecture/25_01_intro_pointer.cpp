#include <iostream>
using namespace std;

int main() {

    // int *p;  --> bad practice

    int a = 10;
    // a++;

    int *ptr = &a;
    // *ptr = *ptr + 1;

    // cout << "Address of a: " << ptr << endl; // *ptr --> derefrence operator
    // cout << "Value of a: " << *ptr << endl;

    // copying a pointer
    /*
    int *q = ptr;

    cout << *ptr << " - " << *q << endl;
    cout << ptr << " - " << q << endl;
    */

    cout << "Printing pointer before increasing (ptr+1): " << ptr << endl;
    // increasing pointer
    ptr = ptr+1;

    cout << "Printing (ptr+1): " << ptr << endl;
    cout << "Value on a: " << a << endl;

    return 0;
}
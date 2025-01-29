#include <iostream>
using namespace std;

int main() {

    char ch = 'q';
    cout << sizeof(ch) << endl;

    char *cptr = &ch;
    cout << sizeof(cptr) << endl;

    int n = 8;
    int *ptr = &n;
    cout << "Size of int ptr " << sizeof(ptr) << endl;

    // Array
    int* arr = new int[8];

    return 0;
}
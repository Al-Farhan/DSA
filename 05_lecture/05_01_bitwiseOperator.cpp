#include <iostream>
using namespace std;

int main() {

    int a=5;
    int b=6;

    cout << (a&b) << endl;
    cout << (a|b) << endl;
    cout << (a^b) << endl;

    // Left shift
    cout << "Left shift 17 by 2: " << (17<<2) <<endl;

    // Right shift
    cout << "Right shift 8 by 3: " << (8>>3) << endl;

    return 0;
}
// inline function: function call replace with the function body before compile

#include <iostream>
using namespace std;

inline int getMax(int& a, int& b) {
    return (a>b) ? a : b;
}

int main() {

    int a = 5, b = 9;

    int ans = getMax(a, b);

    cout << ans << endl;

    a += 8;
    b += 9;

    ans = getMax(a, b);
    cout << ans << endl;

    return 0;
}
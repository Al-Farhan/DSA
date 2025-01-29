#include <iostream>
using namespace std;

int factorial(int n) {

    // base case
    if (n == 0) {
        return 1;
    }

    // processing --> head recursion

    // recursion call
    return n * factorial(n-1);

    // processing --> tail recursion

}

int main() {
    
    int n;
    cin >> n;

    int ans = factorial(n);

    cout << "Factorial of " << n << " is " << ans << endl;

    return 0;
}
#include <iostream>
using namespace std;

void sayDigit(int n, string numbers[]) {

    // base case
    if (n == 0) {
        return;
    }

    // processing
    int digit = n % 10;
    n = n/10;

    sayDigit(n, numbers);

    cout << numbers[digit] << " ";
}

int main() {

    string numbers[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    int n;
    cin >> n;

    sayDigit(n, numbers);
    return 0;
}
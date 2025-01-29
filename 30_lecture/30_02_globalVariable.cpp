#include <iostream>
using namespace std;

int score = 465;

void a(int& i) {
    cout << "Score in a: " << score << endl;
    cout << i << endl;
}

void b(int& i) {
    cout << "Score in b: " << score << endl;
    cout << i << endl;
}

int main() {

    int i = 98;
    cout << "Score in main: " << score << endl;

    a(i);
    b(i);
    return 0;
}
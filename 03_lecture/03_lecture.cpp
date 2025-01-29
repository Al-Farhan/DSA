#include <iostream>
using namespace std;

int main() {

    /*
    char ch;
    cout << "Enter char ";
    cin >> ch;

    if (ch > 'a' && ch < 'z' ) {
        cout << "Lowercase alphabet" << endl;
    } else if (ch > 'A' && ch < 'Z') {
        cout << "Uppercase alphabet" << endl;
    } else if (ch > '0' && ch < '9') {
        cout << "In between 0 to 9";
    }
    */

    /*
    int num;
    cout << "Enter num ";
    cin >> num;

    int i=0;
    int sum=0;

    while (i<=num)
    {
        sum += i;
        i++;
    }

    cout << "Sum is " << sum << endl;
    */

    int num;
    cout << "Enter num ";
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if ((num % i) == 0) {
            cout << "Not a prime number" << endl;
            return 0;
        }
    }

    cout << "Prime number" << endl;

    

    return 0;
}
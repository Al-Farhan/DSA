#include <iostream>
using namespace std;

void update1(int n)
{
    n++;
}

void update2(int& m)
{
    m++;
}

int& func(int a) { // bad practice
    int num = a;
    int& ans = num;
    return ans;
}

int main()
{

    /*
    int i=1;
    int &j = i; // --> Reference variable

    cout << i << endl;
    cout << j << endl;
    j++;
    cout << i << endl;
    */

    int n = 7;
    cout << "Before: " << n << endl;
    update2(n);
    cout << "Before: " << n << endl;

    func(n);

    return 0;
}
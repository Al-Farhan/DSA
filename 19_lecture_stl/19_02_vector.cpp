#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> a;
    cout << "Capacity of vector " << a.capacity() << endl;
    cout << "Size of vector: " << a.size() << endl;

    vector<int> a(5, 1);

    return 0;
}
#include <iostream>
#include <map>
using namespace std;

int main() {

    map<int, string> m;
    m[1] = "Farhan";
    m[2] = "Shaikh";
    m[3] = "Ashfaque";

    m.insert({4, "Monika"});

    for (auto i:m) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
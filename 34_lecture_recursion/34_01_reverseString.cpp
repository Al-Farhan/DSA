#include <iostream>
using namespace std;

void revereseStr(string &str, int start, int end) {

    // base case
    if (start > end) return;

    swap(str[start], str[end]);

    return revereseStr(str, start+1, end-1);
}

int main() {

    string str = "farhan";
    revereseStr(str, 0, str.length()-1);

    cout << str << endl;
    

    return 0;
}
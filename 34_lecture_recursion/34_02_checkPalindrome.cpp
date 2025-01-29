#include <iostream>
using namespace std;

bool checkPalindrome(string str, int s, int e) {

    // base case
    if (s > e) return true;

    if (str[s] != str[e]) return false;

    return checkPalindrome(str, s+1, e-1);
}

int main() {

    string str = "abcddcbb";
    bool ans = checkPalindrome(str, 0, str.length()-1);
    cout << ans << endl;
    return 0;
}
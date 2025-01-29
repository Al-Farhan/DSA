#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch-'A'+'a';
    }
    return ch;
    
}

int getLength(char ch[]) {
    // int i=0;
    int count = 0;

    while (ch[count++] != '\0');

    return count-1;
}

int main() {

    char ch = '8';
    cout << "Convert to lowercase " << toLowerCase(ch) << endl;

    // char ch[20];
    // cin >> ch;

    // cout << ch << endl;

    // int length = getLength(ch);

    // cout << "Size of string " << length << endl;

    return 0;
}
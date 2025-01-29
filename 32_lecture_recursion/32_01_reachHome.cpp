#include <iostream>
using namespace std;

void reachHome(int src, int dest) {

    // base case
    if (src == dest) {
        cout << "Reached..." << endl;
        return;
    }

    // processing
    // src++;
    reachHome(src+1, dest);
}

int main() {
    
    int src=1, dest=10;

    reachHome(src, dest);

    return 0;
}
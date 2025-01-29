#include <iostream>
using namespace std;

class Animal {
    public:
        int age;
        int weight;

    void eating() {
        cout << "Eating" << endl;
    }
};

class Dog: public Animal {};

class GermanShephered: public Dog {};

int main() {

    GermanShephered d1;
    d1.eating();
    return 0;
}
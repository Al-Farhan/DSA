#include <iostream>
using namespace std;

class Animal {
    public:
        int age;
        int weight;

    public:
    void eating() {
        cout << "Eating" << endl;
    }
};

class Dog {
    public:
        void bark() {
            cout << "Barking" << endl;
        }
};

class GermanShephered: public Animal, public Dog {

};

int main() {

    GermanShephered d1;
    d1.eating();
    d1.bark();
    return 0;
}
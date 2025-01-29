#include <iostream>
using namespace std;

class A {
    public:

        void sayHello() {
            cout << "Hello Farhan" << endl;
        }

        void sayHello(string name) {
            cout << "Hello " << name << endl;
        }
};

int main() {

    A *obj1 = new A();
    // obj1->sayHello();

    obj1->sayHello("Shaikh");

    return 0;
}
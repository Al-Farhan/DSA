#include <iostream>
using namespace std;

class Human {

    private:
        double age;

    public:
        double height;
        double weight;
    
        double getAge() {
            return this->age;
        }

        void setWeight(double weight) {
            this->weight = weight;
        }
};

class Male: public Human {
    public:
        string color;

    void sleep() {
        cout << "Sleeping" << endl;
    }
};

int main() {

    Male m1;
    // cout << m1.age << endl;
    m1.setWeight(34.5);

    return 0;
}
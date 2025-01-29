#include <iostream>
using namespace std;

class Hero {

    private:
        int health;

    public:
        char level;
        char *name;
        static int timeToComplete;

        // Constructor
        Hero () {
            cout << "Unparameterized constructor" << endl;
        }

        // Parameterized Constructor
        Hero(int health) {
            this->health = health;
        }

        // Setters
        void setHealth(int h) {
            health = h;
        }

        void setLevel(char l) {
            level = l;
        }

        // Getters
        int getHealth() {
            return health;
        }
        
        char getLevel() {
            return level;
        }

        ~Hero() {
            cout << "Destructor bhai called" << endl;
        }
};

int Hero::timeToComplete = 5;

int main() {

    cout << Hero::timeToComplete << endl;

    // // Static Allocation
    // Hero h1;
    // h1.setHealth(60);
    // h1.level = 'A';

    // cout << "H1 Health: " << h1.getHealth() << endl;
    // cout << "H1 Level: " << h1.getLevel() << endl;

    // // Dynamic Allocation
    // Hero *h2 = new Hero();

    // h2->setHealth(57);
    // cout << "h2 health: " << h2->getHealth() << endl;
    
    return 0;
}
#include <iostream>

using namespace std;

class Car;
class Person {
    private:
        int age;
        string name;
    public:
        Person(string name) { 
            this -> name = name;
        }
        friend void infocar(Car& car, Person& person);
};

class Car {
    private:
        string name;
    public:
        Car(string name) { 
            this -> name = name;
        }
        friend void infocar(Car& car, Person& person);
};

void infocar(Car& car, Person& person) {
    cout << "Человек с именем " << person.name << " имеет машину " << car.name << endl;
}

int main() {
    Car bmw("BMW");
    Person Jhon("Jhon");
    infocar(bmw, Jhon);

    cout << "OK!" << endl;
    return 0;
}
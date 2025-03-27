#include <iostream>

using namespace std;

class Building {
    private:
        string name;
        int year;
        string type;
    public:
        Building () {}

        Building(string n, string t, int y) {
            setdata(n, t, y);
        }

        void setdata(string name, string type, int year) {
            this -> type = type;
            this -> name = name;
            this -> year = year;
        }

        void getinfo() {
            cout << this -> name << this -> type << this -> year << endl;
        }

        ~Building() {
            cout << "Delete obj" << endl;
        }
};

int main() {

    Building school("toptop", "school", 2010);
    // school.setdata("toptop", "school", 2010);
    school.getinfo();

    Building house("house", "home", 2007);
    // house.setdata("house", "home", 2007);
    house.getinfo();
    
    cout << "OK!" << endl;
    return 0;
}
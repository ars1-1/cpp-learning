#include <iostream>

using namespace std;

class Building {
    private:
        string name;
        int year;
        string type;
    public:
        void setdata(int y, string t, string n) {
            year = y;
            type = t;
            name = n;
        }

        void getinfo() {
            cout << type << endl << year << endl << name << endl;
        }
};

int main() {

    Building school;
    // school.name = "toptop";
    // school.type = "school";
    // school.year = 2010;
    school.setdata(2010, "school", "toptop");
    school.getinfo();

    Building house;
    // house.name = "house";
    // house.type = "home";
    // house.year = 2007;
    house.setdata(2007, "home", "house");
    house.getinfo();
    
    cout << "OK!" << endl;
    return 0;
}
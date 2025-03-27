#include <iostream>

using namespace std;

struct Point
{
    int x, y;
};

struct Tree
{
    string name = "";
    int ages;
    bool is_alive;
    float height;
    Point place;

    void get_info() {
        cout << "Name: " << name << endl;
        cout << "Ages: " << ages << endl;
        cout << "x: " << place.x << endl;
        cout << "y: " << place.y << endl;

    }
};

int main() {

    Tree dub;
    dub.name = "Дуб";
    dub.ages = 24;
    dub.place.x = 10;
    dub.place.y = 11;

    Tree yelka;
    yelka.name = "Елка";
    yelka.ages = 5;
    yelka.place.x = 5;
    yelka.place.y = 1;

    // cout << dub.name << " - " << yelka.name;

    dub.get_info();
    yelka.get_info();
    cout << "OK!";
    return 0;
}    

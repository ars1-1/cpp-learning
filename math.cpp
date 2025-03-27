#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {

    string str1 = "Hello";
    string str2 = "World";
    // strings
    str1.append(str2);
    str1.pop_back();
    str1.push_back('!');
    cout << str1;
    str1.resize(5);
    cout << str1.length();
    cout << str1;
    // xz xz
    cout << pow(2, 3) << endl;
    cout << abs(-3) << endl;
    // sin cos
    cout << sin(12) << endl;
    cout << cos(1) << endl;
    // square
    cout << sqrt(16) << endl;
    // okruglenie
    cout << ceil(1.78f) << endl;
    cout << floor(1.78f) << endl;
    cout << round(1.5f) << endl;

    cout << "OK!" << endl;
    return 0;
}
#include <iostream>
#include <fstream>

using namespace std;

main () {
    // ofstream file("test.txt", ios_base::out);
    // if(file.is_open()) {
    //     file << "Hello World";
    //     file.close();
    // }
    ifstream file("test.txt");
    if(file.is_open()) {
        // string temp;
        // file >> temp;
        char temp[100];
        file.getline(temp, 100);
        cout << temp << endl;
        file.close();
    }
    cout << "OK!";
    return 0;
}
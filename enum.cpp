#include <iostream>

using namespace std;

enum Options {
    open,
    close,
    wait,
    del
};

struct File
{
    float weight;
    string name;
    Options options;
};


int main() {

    File myfile;
    myfile.weight = 1.5f;
    myfile.name = "text.txt";
    myfile.options = Options::close;

    // cout << myfile.options << endl;

    if(myfile.options == Options::close) {
        cout << "File close" << endl;
    }

    cout << "OK!";
    return 0;
}
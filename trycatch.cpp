#include <iostream>

using namespace std;

void devide(float a, float b) {
    if(b == 0) throw 0; 
    else cout << (a / b) << endl;
}

int main() {

    try {
        devide(5.2f, 0.0f);
    } catch(int err) {
        if(err == 0) cout << "Error" << endl;
    }

    cout << "OK!";
    return 0;
}
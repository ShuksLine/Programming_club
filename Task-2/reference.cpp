#include <iostream>
using namespace std;

int main() {

    int x = 25;

    int &ref = x;   // reference to x

    ref = 80;       // change value using reference

    cout << "New value of x: " << x << endl;

    return 0;
}

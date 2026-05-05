#include <iostream>
using namespace std;

int main() {

    int num = 50;

    int *ptr;
    ptr = &num;   // store address of num

    cout << "Value using pointer: " << *ptr << endl;

    *ptr = 100;   // change value using pointer

    cout << "New value of num: " << num << endl;

    return 0;
}

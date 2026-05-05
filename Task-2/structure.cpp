#include <iostream>
using namespace std;

struct Rectangle {
    int width;
    int breadth;
};

int main() {

    Rectangle r1;

    r1.width = 10;
    r1.breadth = 5;

    int area = r1.width * r1.breadth;

    cout << "Area of rectangle: " << area << endl;

    return 0;
}

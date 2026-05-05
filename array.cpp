#include <iostream>
using namespace std;

int main() {

    int arr[5] = {1, 2, 3, 4, 5};

    // Using normal for loop
    cout << "Normal for loop: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Using for-each loop
    cout << "For-each loop: ";
    for(int value : arr) {
        cout << value << " ";
    }

    return 0;
}

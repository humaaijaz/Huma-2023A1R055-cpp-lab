/* program to calculate area of box using parameterized constructor*/
#include <iostream>
using namespace std;

class Box {
private:
    float length, width, height;

public:
    // Parameterized constructor to initialize dimensions of the box
    Box(float l, float w, float h) {
        length = l;
        width = w;
        height = h;
    }

    // Function to calculate the area (surface area of the box)
    float calculateArea() {
        return 2 * (length * width + width * height + height * length);
    }
};

int main() {
    float length, width, height;

    cout << "Enter the length of the box: ";
    cin >> length;

    cout << "Enter the width of the box: ";
    cin >> width;

    cout << "Enter the height of the box: ";
    cin >> height;

    Box box(length, width, height);

    cout << "The surface area of the box is: " << box.calculateArea() << endl;

    return 0;
}

/* wap to calculate volume of cube using parameterized constructor*/
#include <iostream>
using namespace std;

class Cube {
private:
    float side;

public:
    Cube(float s) {
        side = s;
    }

    float calculateVolume() {
        return side * side * side;
    }
};

int main() {
    float side;

    cout << "Enter the side length of the cube: ";
    cin >> side;

    Cube cube(side);

    cout << "The volume of the cube is: " << cube.calculateVolume() << endl;

    return 0;
}

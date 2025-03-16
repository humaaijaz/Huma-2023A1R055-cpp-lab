/*write aprogram to print the area of a rectange by creating a class named 'area" having one function
 Length and breadth of the rectangle are entered through keyboard using parameterized constructor*/

  #include <iostream>
using namespace std;

class Area {
private:
    float length, breadth;

public:
    Area(float l, float b) {
        length = l;
        breadth = b;
    }

    float calculateArea() {
        return length * breadth;
    }
};

int main() {
    float length, breadth;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    Area rect(length, breadth);

    cout << "The area of the rectangle is: " << rect.calculateArea() << endl;

    return 0;
}



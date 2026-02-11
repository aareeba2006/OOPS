#include <iostream>
using namespace std;

class Box {
public:
    int length;
    int width;

    Box() {          // default constructor
        length = 10;
        width = 5;
    }

    void showArea() {
        cout << length * width;
    }
};

int main() {
    Box b1;          // constructor runs automatically
    b1.showArea();   // member function call
}
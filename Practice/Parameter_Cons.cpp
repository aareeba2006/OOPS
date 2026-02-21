#include <iostream>
using namespace std;

class Box {
public:
    int length;
    int width;

    Box(int l, int w) {          // parameter constructor
        length = l;
        width = w;
    }

    void showArea() {
        cout <<"Area is: "<< length * width;
    }
};

int main() {
    Box b1(5,5);        // constructor runs automatically
    b1.showArea();   // member function call
}
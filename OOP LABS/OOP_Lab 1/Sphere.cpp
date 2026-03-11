#include <iostream>
using namespace std;


// Function to calculate surface area
float surfaceArea(float radius) {
    return 4 * 3.14159 * radius * radius;
}

// Function to calculate volume
float volume(float radius) {
    return (4.0 / 3.0) * 3.14159 * radius * radius * radius;
}

int main() {
    float r;

    cout << "Enter radius of the sphere: ";
    cin >> r;

    cout << "Surface Area of Sphere = " << surfaceArea(r) << endl;
    cout << "Volume of Sphere = " << volume(r) << endl;

    return 0;
}
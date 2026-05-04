#include <iostream>
using namespace std;

class TollBooth {
private:
    int totalCars;
    double totalMoney;

public:
    // Constructor
    TollBooth() {
        totalCars = 0;
        totalMoney = 0.0;
    }

    // Member function to handle a paying car
    void payingCar() {
        totalCars += 1;
        totalMoney += 0.50;
    }

    // Display totals
    void display() const {
        cout << "Total cars: " << totalCars << endl;
        cout << "Total money collected: $" << totalMoney << endl;
    }
};

int main() {
    TollBooth booth;

    // Simulate cars passing the toll
    booth.payingCar();
    booth.payingCar();
    booth.payingCar();

    // Display totals
    booth.display();

    return 0;
}

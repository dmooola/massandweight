//mass and weight program. Oladamola Ola-Buraimo. 03/11/24. This code will take user input and determine whether they are light, heavy, or acceptable
#include <iostream>

using namespace std;

double calculateWeight(double mass) {
    const double gravityConstant = 9.8;
    double weight = mass * gravityConstant;
    return weight;
}

int main() {
    try {
        double mass;

        cout << "Enter the object's mass in kilograms: ";
        cin >> mass;

        double weight = calculateWeight(mass);

        cout << "The weight of the object is " << weight << " newtons." << endl;

        if (weight > 1000) {
            cout << "This object is too heavy." << endl;
        }
        else if (weight < 10) {
            cout << "This object is too light." << endl;
        }
        else {
            cout << "The weight is in the acceptable range." << endl;
        }
    }
    catch (...) {
        cout << "Please enter a valid numerical value for the mass." << endl;
    }

    return 0;
}

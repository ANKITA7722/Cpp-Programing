// 1. Write a C++ program to implement a class called Circle that has private member variables for radius.
//  Include member functions to calculate the circle's area and circumference.

#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor to initialize radius
    Circle(double r) {
        radius = r;
    }

    // Function to calculate area
    double calculateArea() {
        return 3.14159 * radius * radius;
    }

    // Function to calculate circumference
    double calculateCircumference() {
        return 2 * 3.14159 * radius;
    }

    // Function to display the radius, area, and circumference
    void display() {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Circumference: " << calculateCircumference() << endl;
    }
};

int main() {
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    // Create a Circle object
    Circle circle(r);

    // Display the area and circumference
    circle.display();

    return 0;
}

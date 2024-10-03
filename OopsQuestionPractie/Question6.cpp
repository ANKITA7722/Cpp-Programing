//  Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. 
// Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

//#include <iostream>
using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    // Constructor to initialize the sides of the triangle
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // Function to check if the triangle is equilateral
    bool isEquilateral() {
        return (side1 == side2 && side2 == side3);
    }

    // Function to check if the triangle is isosceles
    bool isIsosceles() {
        return (side1 == side2 || side2 == side3 || side1 == side3);
    }

    // Function to check if the triangle is scalene
    bool isScalene() {
        return (side1 != side2 && side2 != side3 && side1 != side3);
    }

    // Function to display the type of triangle
    void displayType() {
        if (isEquilateral()) {
            cout << "The triangle is equilateral." << endl;
        } else if (isIsosceles()) {
            cout << "The triangle is isosceles." << endl;
        } else if (isScalene()) {
            cout << "The triangle is scalene." << endl;
        } else {
            cout << "Invalid triangle." << endl;
        }
    }
};

int main() {
    double s1, s2, s3;

    // Input sides from the user
    cout << "Enter the length of side 1: ";
    cin >> s1;
    cout << "Enter the length of side 2: ";
    cin >> s2;
    cout << "Enter the length of side 3: ";
    cin >> s3;

    // Create a Triangle object
    Triangle triangle(s1, s2, s3);

    // Display the type of the triangle
    triangle.displayType();

    return 0;
}

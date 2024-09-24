
//  Write a C++ program to create a class called Car that has private member variables for company, model, and year.
//  Implement member functions to get and set these variables.

#include <iostream>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    // Function to set the values of company, model, and year
    void setDetails(string comp, string mod, int yr) {
        company = comp;
        model = mod;
        year = yr;
    }

    // Function to get the company
    string getCompany() {
        return company;
    }

    // Function to get the model
    string getModel() {
        return model;
    }

    // Function to get the year
    int getYear() {
        return year;
    }

    // Function to display the details of the car
    void display() {
        cout << "Company: " << getCompany() << endl;
        cout << "Model: " << getModel() << endl;
        cout << "Year: " << getYear() << endl;
    }
};

int main() {
    Car car;

    string company, model;
    int year;

    // Input details from the user
    cout << "Enter the company of the car: ";
    getline(cin, company);
    cout << "Enter the model of the car: ";
    getline(cin, model);
    cout << "Enter the year of manufacture: ";
    cin >> year;

    // Set the details of the car
    car.setDetails(company, model, year);

    // Display the details of the car
    car.display();

    return 0;
}

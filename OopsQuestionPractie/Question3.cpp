// . Write a C++ program to create a class called Person that has private member variables for name, age and country.
//  Implement member functions to set and get the values of these variables.

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // Function to set the values of name, age, and country
    void setDetails(string n, int a, string c) {
        name = n;
        age = a;
        country = c;
    }

    // Function to get the name
    string getName() {
        return name;
    }

    // Function to get the age
    int getAge() {
        return age;
    }

    // Function to get the country
    string getCountry() {
        return country;
    }

    // Function to display the details of the person
    void display() {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Country: " << getCountry() << endl;
    }
};

int main() {
    Person person;

    string name, country;
    int age;

    // Input details from the user
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cin.ignore();  // To clear the newline character from the buffer
    cout << "Enter country: ";
    getline(cin, country);

    // Set the details of the person
    person.setDetails(name, age, country);

    // Display the details of the person
    person.display();

    return 0;
}


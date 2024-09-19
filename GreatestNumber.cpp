#include<iostream>
using namespace std;
//que:-find greatest number using friend function
class Y;  // Forward declaration of class Y

class X {
    int a;

public:
    X(int val) : a(val) {}  // Constructor to initialize 'a'

    void show() {
        cout << "Value of a: " << a << endl;
    }

    // Friend function declaration
    friend void compare(X, Y);
};

class Y {
    int b;

public:
    Y(int val) : b(val) {}  // Constructor to initialize 'b'

    void disp() {
        cout << "Value of b: " << b << endl;
    }

    // Friend function declaration
    friend void compare(X, Y);
};

// Friend function definition
void compare(X objX, Y objY) {
    if (objX.a > objY.b) {
        cout << "a is larger\n";
    } else {
        cout << "b is larger\n";
    }
}

int main() {
    X objX(10);  // Create object of class X and set a = 10
    Y objY(20);  // Create object of class Y and set b = 20

    objX.show();    // Display value of a
    objY.disp();    // Display value of b
    compare(objX, objY);  // Compare a and b, and display which is larger

}
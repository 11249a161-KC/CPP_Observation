#include <iostream>
#include <cmath>
using namespace std;

class Circle;  // Forward declaration

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    // Declare friend function
    friend void compareArea(Rectangle r, Circle c);
};

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Declare friend function
    friend void compareArea(Rectangle r, Circle c);
};

// Friend function definition
void compareArea(Rectangle r, Circle c) {
    int rectArea = r.length * r.width;
    double circArea = M_PI * c.radius * c.radius;

    cout << "Rectangle Area: " << rectArea << endl;
    cout << "Circle Area: " << circArea << endl;

    if (rectArea > circArea)
        cout << "Rectangle has a larger area." << endl;
    else if (rectArea < circArea)
        cout << "Circle has a larger area." << endl;
    else
        cout << "Both have equal area." << endl;
}

int main() {
    Rectangle rect(10, 5);
    Circle circ(4.5);

    compareArea(rect, circ);  // Friend function accessing both classes
    return 0;
}

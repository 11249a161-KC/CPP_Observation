#include<iostream>
using namespace std;

class Circle {
    private:
        float radius;
    public:
        Circle(float r) : radius(r) {}
        // Friend function declaration
        friend void calculate(Circle);
};

// Friend function definition
void calculate(Circle c) {
    float area = 3.14159f * c.radius * c.radius;
    float perimeter = 2 * 3.14159f * c.radius;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
}

int main() {
    float r;
    cout << "Enter radius: ";
    cin >> r;
    Circle c(r);
    calculate(c);
    return 0;
}
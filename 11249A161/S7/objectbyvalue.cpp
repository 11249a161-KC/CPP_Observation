#include <iostream>
using namespace std;

class person {
public:
    string name;
    int age;
    
    void setage(int a) {
        age = a;
    }
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age:" << age << endl;
    }
};

// Function taking object by value
void show(person p) {
    cout << "Inside function (copy): ";
    p.display();
    p.setage(100); // modifies only the copy
}

int main() {
    person p1;
    p1.setage(85);
    
    show(p1); // Copy is passed
    
    cout << "In main (original): ";
    p1.display(); // remains unchanged
    
    return 0;
}

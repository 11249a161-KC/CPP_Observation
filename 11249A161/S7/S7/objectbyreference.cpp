#include <iostream>
using namespace std;

class Student {
public:
    int marks;

    // Setter function to set marks
    void setMarks(int m) {
        marks = m;
    }

    // Display function to print marks
    void display() {
        cout << "Marks: " << marks << endl;
    }
};

// Function taking object by reference
void change(Student &s) {
    s.setMarks(95); // Modifies the original object
}

int main() {
    Student s1;
    s1.setMarks(85);  // Initial marks set to 85

    cout << "Before change: ";
    s1.display();  // Display marks before modification

    change(s1);  // Passing object by reference to change marks

    cout << "After change: ";
    s1.display();  // Display marks after modification

    return 0;
}

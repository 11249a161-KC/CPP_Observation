#include <iostream>
using namespace std;

class Person {
public:
    void info() {
        cout << "I am a person" << endl;
    }
};

class Learner {
public:
    void study() {
        cout << "I study subjects" << endl;
    }
};

class Student : public Person, public Learner {
public:
    void role() {
        cout << "I am a student" << endl;
    }
};

int main() {
    Student s;
    s.info();
    s.study();
    s.role();
    return 0;
}

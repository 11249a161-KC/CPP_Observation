#include<iostream>
using namespace std;

class Student
{
    int roll;
    string name;
    public:
    void getData()
    {
        cout<<"Roll and Name"<<endl;
        cin>>roll>>name;
    }
    void display()
    {
        cout<<"Roll"<<roll<<"Name"<<name<<endl;
    }
};

int main()
{
    Student s[5];
    for(int i=0; i<5;i++)
    {
        s[i].getData();
    }
    for(int i=0; i<5;i++)
    {
        s[i].display();
    }
    return 0;
}
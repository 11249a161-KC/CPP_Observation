#include<iostream>
using namespace std;

class Patient
{
    public:
    int patientID;
    string name;
    string disease;

    void setPatient(int id, string n, string d)
    {
        patientID = id;
        name = n;
        disease = d;
    }

    void showPatient();

};

void Patient :: showPatient()
{
    cout<<"PatientID:"<<patientID<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Disease:"<<disease<<endl;
}

int main()
{
    Patient p1,p2;
    p1.setPatient(101,"Rahul","Tuberculosis");
    p2.setPatient(102,"Anupama","Jaundice");
    p1.showPatient();
    p2.showPatient();
    return 0;

}
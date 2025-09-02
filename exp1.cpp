#include<iostream>
using namespace std;
class Laptop
{
    public:
    string brand;
    string processor;
    int ram;
    void display()
    {
        cout<<"Brand"<<brand<<endl;
        cout<<"Processor"<<processor<<endl;
        cout<<"RAM"<<ram<<"GB"<<endl;
    }
};

int main()
{
    Laptop l1,l2;
    l1.brand = "Dell";
    l1.processor = "Intel i5";
    l1.ram = 8;
    l2.brand = "Lenovo";
    l2.processor = "AMD Ryzen 5";
    l2.ram = 16;
    l1.display();
    l2.display();
    return 0;
}
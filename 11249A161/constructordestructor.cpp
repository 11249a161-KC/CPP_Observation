#include<iostream>
using namespace std;

class Demo
{
    int x;
    public:
    Demo()
    {
        x=0;
        cout<<"Default Constructor"<<endl;
    }
    Demo(int val)
    {
        x = val;
        cout<<"Parametrised Constructor"<<endl;
    }
    Demo (const Demo &d)
    {
        x = d.x;
        cout<<"Copy Constructor"<<endl;
    }
    ~Demo()
    {
        cout<<"Destructor called"<<endl;
    }
    void show()
    {
        cout<<"Value:"<<x<<endl;
    }
};

int main()
{
    Demo d1,d2(100),d3=d2;
    d1.show();
    d2.show();
    d3.show();
    return 0;
}
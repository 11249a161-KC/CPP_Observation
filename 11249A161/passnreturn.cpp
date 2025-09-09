#include<iostream>
using namespace std;

class Number
{
    int value;
    public:
    Number(int v = 0):value(v){}
    void display()
    {
        cout<<"Value:"<<value<<endl;
    }
    Number add(Number n)
    {
        return Number(value + n.value);
    }
};

int main()
{
    Number n1(30),n2(40),n3;
    n3 = n1.add(n2);
    n3.display();
    return 0;
}
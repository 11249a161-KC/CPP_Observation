#include<iostream>
using namespace std;

class Demo
{
    int value;

    public:
    Demo(int v = 0) : value(v) {}
    Demo operator -()
    {
        return Demo(-value);
    }
    bool operator !()
    {
        return !value;
    }
    Demo operator ~()
    {
        return Demo(~value);
    }
    Demo operator ++()
    {
        ++value;
        return *this;
    }
    Demo operator++(int)
    {
        Demo temp = *this;
        value++;
        return temp;
    }
    Demo operator --()
    {
        --value;
        return *this;
    }
        Demo operator--(int)
    {
        Demo temp = *this;
        value--;
        return temp;
    }
    void display(const string& label)
    {
        cout<<label<<"Value"<<value<<endl;
    }
};

int main()
{
    Demo obj(10);
    obj.display("Original");
    Demo neg = -obj;
    neg.display ("Unary minus (-obj):");
    cout<<"Logical NOT(!obj):"<<!obj<<endl;
    Demo bitwise = ~obj;
    bitwise.display ("Bitwise NOT (~obj):");
    Demo preinc = -obj;
    preinc.display ("Prefix increment (++obj):");
    Demo postinc = -obj;
    postinc.display ("Postfix increment (obj++):");
    obj.display("After postfix increment:");
    Demo predec = -obj;
    predec.display ("Prefix increment (--obj):");
    Demo postdec = -obj;
    postdec.display ("Postfix increment (obj--):");
    obj.display("After postfix idecrement:");
    return 0;
}
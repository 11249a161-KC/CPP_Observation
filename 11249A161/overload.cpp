#include<iostream>
using namespace std;

class Calculator
{
public:
   void add1(int a, int b)
   {
    cout<<"Sum(int)"<<a+b<<endl;
   }
   void add2(double a, double b)
   {
    cout<<"Sum(double)"<<a+b<<endl;
   }
   void add3(int a, int b, int c)
   {
    cout<<"Sum(3ints)"<<a+b+c<<endl;
   }
};

int main()
{
    Calculator calc;
    calc.add1(1,2);
    calc.add2(1.5,3.5);
    calc.add3(2,5,8);
    return 0;
}
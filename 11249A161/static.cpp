#include<iostream>
using namespace std;
class Counter
{
    static int count;
    public:
    Counter()
    {
        count++;
    }
    static void showcount()
    {
        cout<<"Count:"<<count<<endl;
    }
};

int Counter::count = 0;

int main()
{
    Counter c1,c2,c3;
    Counter::showcount();
    return 0;
}
#include<iostream>
using namespace std;

class Display;
class Box
{
    private:
    int length;
    int width;
    int height;

    public:
    Box(int l, int w, int h) : length(l), width(w), height(h) {}
    friend class Display;
};

class Display
{
    public:
    void showVolume(Box b)
    {
        int volume = b.length * b.width * b.height;
        cout<<"Volume of box:"<<volume<<endl;
    }
    void showDimensions(Box b)
    {
        cout<<"Length:"<<b.length<<endl;
        cout<<"Width:"<<b.width<<endl;
        cout<<"Height:"<<b.height<<endl;
    }
};

int main()
{
    Box myBox(5,3,2);
    Display d;
    d.showDimensions(myBox);
    d.showVolume(myBox);
    return 0;
}
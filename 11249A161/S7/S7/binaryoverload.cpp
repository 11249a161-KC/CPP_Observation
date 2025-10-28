#include<iostream>
using namespace std;

class Vector2D
{
    private:
    float x,y;

    public:
    Vector2D(float x=0, float y=0) : x(x),y(y) {}

    Vector2D operator+(const Vector2D& other) const
    {
        return Vector2D(x + other.x, y + other.y);
    }

    Vector2D operator-(const Vector2D& other) const
    {
        return Vector2D(x - other.x, y - other.y);
    }

    void display() const 
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};

int main ()
{
    Vector2D velocity1(3.5,2.0);
    Vector2D velocity2(1.5,4.0);

    cout<<"Velocity 1:";
    velocity1.display();

    cout<<"Velocity 2:";
    velocity2.display();

    Vector2D totalVelocity = velocity1 + velocity2;
    cout<<"Total Velocity(Addition):";
    totalVelocity.display();

    Vector2D diffVelocity = velocity1 - velocity2;
    cout<<"Velocity Difference(Subtraction):";
    diffVelocity.display();

    return 0;
}
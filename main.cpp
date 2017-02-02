// This program nests on class inside another.  It has a class
// with a member variable that is an instance of another class.
#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    void setLength(double len)
    {
        length = len;
    }
};
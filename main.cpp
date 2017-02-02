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

    void setWidth(double wid)
    {
        width = wid;
    }

    double getLength()
    {
        return length;
    }

    double get Width()
    {
        return width;
    }

    double calArea()
    {
        return length * width;
    }
};

class Carpet
{
private:
    double pricePerSqYd;
    Rectangle size;             // size is an instance of
                                // the Rectangle class
public:
    void setPricePerYd(double)
    {
        pricePerSqYd = p;
    }

    void setDimensions(double len, double wid)
    {
        size.setLength(len/3);  // convert feet to yards
        size.setWidth(wid/3);
    }

    double getTotalPrice()
    {
        return(size.calArea() * pricePerSqYd);
    }
};
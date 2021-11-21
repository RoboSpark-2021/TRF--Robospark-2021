#include <iostream>

class Rectangle
{
private:
    int length, breadth;
public:
    Rectangle();
    Rectangle(int);
    Rectangle(int, int);

    int getLength();
    int getBreadth();
    void setLength(int);
    void setBreadth(int);
    int getArea();

    friend std::ostream &operator<<(std::ostream &os, Rectangle &rect)
    {
        os << "Rectangle with area = " << rect.getArea() << std::endl;
        return os;
    }
};

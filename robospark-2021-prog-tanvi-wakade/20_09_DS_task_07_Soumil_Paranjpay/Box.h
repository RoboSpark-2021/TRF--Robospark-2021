#ifndef BOX_H
#define BOX_H

class Box
{
private:
    double length, breadth, height;

public:
    Box()
    {
        height = 0;
        breadth = 0;
        length = 0;
    }

    Box(double length, double breadth, double height)
    {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }

    double getLength() const
    {
        return length;
    }

    double getBreadth() const
    {
        return breadth;
    }

    double getHeight() const
    {
        return height;
    }

    void setLength(double length)
    {
        this->length = length;
    }

    void setBreadth(double breadth)
    {
        this->breadth = breadth;
    }

    void setHeight(double height)
    {
        this->height = height;
    }

    double getVolume() const
    {
        return height * breadth * length;
    }

    bool operator>(Box b)
    {
        return this->getVolume() > b.getVolume();
    }

    bool operator>=(Box b)
    {
        return this->getVolume() >= b.getVolume();
    }

    bool operator<(Box b)
    {
        return this->getVolume() < b.getVolume();
    }

    bool operator<=(Box b)
    {
        return this->getVolume() <= b.getVolume();
    }

    bool operator==(Box b)
    {
        return this->getVolume() == b.getVolume();
    }
};

#endif // BOX_H
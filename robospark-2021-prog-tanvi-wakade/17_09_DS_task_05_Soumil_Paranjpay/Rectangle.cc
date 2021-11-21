#include "Rectangle.h"

Rectangle::Rectangle()
{
    this->length = 0;
    this->breadth = 0;
}

Rectangle::Rectangle(int side)
{
    this->length = side;
    this->breadth = side;
}

Rectangle::Rectangle(int length, int breadth)
{
    this->length = length;
    this->breadth = breadth;
}

int Rectangle::getArea()
{
    return this->length * this->breadth;
}

int Rectangle::getLength()
{
    return this->length;
}

int Rectangle::getBreadth()
{
    return this->breadth;
}

void Rectangle::setBreadth(int breadth)
{
    this->breadth = breadth;
}

void Rectangle::setLength(int length)
{
    this->length = length;
}


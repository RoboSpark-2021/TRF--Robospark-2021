// Create a class named Box which will have three private memebers length, breadth and height.
// 1. Provide default and parameterized constructors for the class.
// 2. Create a public member function getVolume which will calculate the volume of the box.
// 3. Create getters and setters for each of the attribute of the class and also a member function to print the dimensions of the object.
// 4. Overload following operators with reference to volume of a box
//    a. >
//    b. <
//    c. <=
//    d. >=
//    e. ==
#include<iostream>
using namespace std;
class Box
{
    float length,breadth,height;

public:

    Box()
    {
        length = breadth = height = 0;
    }
    Box(float length, float breadth, float height)
    {
        this -> length = length;
        this -> breadth = breadth;
        this -> height = height;
    }
    float getVolume()
    {
        return length*breadth*height;
    }
    float getLength()
    {
        return length;
    }
    float getBreadth()
    {
        return breadth;
    }
    float getHeight()
    {
        return height;
    }
    void setLength(float length)
    {
        this -> length = length;
    }
    void setBreadth(float breadth)
    {
        this -> breadth = breadth;
    }
    void setHeight(float height)
    {
        this -> height = height;
    }

    void printDim()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Height: " << height << endl;
        cout << "Volume: " << getVolume() << endl;
    }

    bool operator<(Box obj)
    {
        if (getVolume() < obj.getVolume())
        {
            return true;
        }
        return false;
    }

    bool operator>(Box obj)
    {
        if (getVolume() > obj.getVolume())
        {
            return true;
        }
        return false;
    }

    
    bool operator<=(Box obj)
    {
        if (getVolume() <= obj.getVolume())
        {
            return true;
        }
        return false;
    }

    bool operator>=(Box obj)
    {
        if (getVolume() >= obj.getVolume())
        {
            return true;
        }
        return false;
    }

    bool operator==(Box obj)
    {
        if (getVolume() == obj.getVolume())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Box b1(10,20,30);
    Box b2(5,10,15);
    cout << "Dimensions of B1 are" << endl;
    b1.printDim();

    cout << "\nDimensions of B2 are" << endl;
    b2.printDim();
    std::cout << std::boolalpha;
    cout << "\nVolume of B1 < B2 is " << (b1 < b2) << endl;
    cout << "Volume of B1 <= B2 is " << (b1 <= b2) << endl;
    cout << "Volume of B1 > B2 is " << (b1 > b2) << endl;
    cout << "Volume of B1 >= B2 is " << (b1 >= b2) << endl;
    cout << "Volume of B1 == B2 is " << (b1 == b2) << endl;
}
// Create a class named 'Rectangle' with two data members- length and breadth and a function to calculate the area which is 'length*breadth'. 
//The class has three constructors which are :
// 1 - having no parameter - values of both length and breadth are assigned zero.
// 2 - having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
// 3 - having one number as parameter - both length and breadth are assigned that number.
// Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.
// Use getter and setter functions for each attribute of the class.

#include<iostream>
using namespace std;

class Rectangle
{
    int length,breadth;

public:
    Rectangle()
    {
        this->length = this->breadth = 0;
    }
    Rectangle( int l, int b )
    {
        this->length = l;
        this->breadth = b;
    }
    Rectangle(int x)
    {
        this->length = x;
        this->breadth = x;
    }

    void getter()
    {
        cout << "Length is: " << this->length << endl;
        cout << "Breadth is: " << this->breadth << endl;
    }

    void setter(int l , int b)
    {
        this->length = l;
        this->breadth = b;
    }

    int area()
    {
        return this->length * this->breadth;
    }
};

int main()
{
    Rectangle obj1,obj2(10,20),obj3(30);

    obj1.getter();
    cout << "Area is: " << obj1.area() << endl << endl;

    obj2.getter();
    cout << "Area is: " << obj2.area() << endl << endl;

    obj3.getter();
    cout << "Area is: " << obj3.area() << endl << endl;

}
// Create a class named 'Rectangle' with two data members- length and breadth and a function to calculate the area which is 'length*breadth'. The class has three constructors which are :
// 1 - having no parameter - values of both length and breadth are assigned zero.
// 2 - having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
// 3 - having one number as parameter - both length and breadth are assigned that number.
// Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.
// Use getter and setter functions for each attribute of the class.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
    public: 
    double length; double breadth;
    Rectangle(){
        length = 0;
        breadth = 0;
    }
    Rectangle(double l, double b){
        length = l; breadth = b;
    }
    Rectangle(double side){
        length = breadth = side;
    }
    void set_length(double l){
        length = l; 
    }
    void set_breadth(double b){
        breadth = b; 
    }
    double get_length(){
        return length;
    }
    double get_breadth(){
        return breadth;
    }
    double area(){
        return length*breadth;
    }
};
int main()
{
    Rectangle r1;
    Rectangle r2(7);
    Rectangle r3(59,66);
    
    r1.set_length(5); r1.set_breadth(6);
    cout<<"Area of rectangle 1 is: "<<r1.area()<<endl;
    cout<<"Area of rectangle 2 is: "<<r2.area()<<endl;
    cout<<"Area of rectangle 3 is: "<<r3.area()<<endl;
    return 0;
}

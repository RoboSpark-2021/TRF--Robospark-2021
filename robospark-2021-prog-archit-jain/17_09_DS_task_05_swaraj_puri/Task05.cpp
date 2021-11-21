/*
Task 05 (17/09/2021)
Create a class named 'Rectangle' with two data members- length and breadth and a function
to calculate the area which is 'length*breadth'. The class has three constructors which are :
1 - having no parameter - values of both length and breadth are assigned zero.
2 - having two numbers as parameters - the two numbers are assigned as length and breadth
respectively.
3 - having one number as parameter - both length and breadth are assigned that number.
Now, create objects of the 'Rectangle' class having none, one and two parameters and print
their areas.
Use getter and setter functions for each attribute of the class.

*/
#include<iostream>

using namespace std;

class Rectangle {
private:
int length,breadth;


public:

int setter(int x, int y) // setter method
{
   length=x;
    breadth=y;
}
int getter() // getter method
{
   cout << "Area is:" << length*breadth <<endl;
}

Rectangle()
{ //setter
  setter(0,0);
  getter();
    }

Rectangle(int x, int y)
{ //setter
 setter(x,y);
 //getter
  getter();
}

Rectangle(int x)
{ //setter
 setter(x,x);
 //getter
  getter();
}

};

int main()
{
    int x,y;


    cout << "Area from constructor with no argument: \n";
    Rectangle obj1 ;

    cout << "Area from constructor with two arguments: \n";
    cout << "Enter length:";
    cin >> x;
    cout << "\nEnter breadth:";
    cin >> y;
    Rectangle obj2(x,y);



    cout << "Area from constructor with one argument: \n";
    cout << "Enter side:";
    cin >> x;
    Rectangle obj3(x);

}

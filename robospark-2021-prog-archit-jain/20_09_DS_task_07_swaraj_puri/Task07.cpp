/*
Create a class named Box which will have three private memebers length, breadth and height.
1. Provide default and parameterized constructors for the class.
2. Create a public member function getVolume which will calculate the volume of the box.
3. Create getters and setters for each of the attribute of the class and also a member function to print the dimensions of the object.
4. Overload following operators with reference to volume of a box
   a. >
   b. <
   c. <=
   d. >=
   e. ==
*/
#include<iostream>
using namespace std;

class cal{
private:
    int l,b,h;

public:
// setter for each attribute
void length_setter()
{
    cout << "\n Enter length: ";
    cin >> l;
}
void breadth_setter()
{
    cout << "\n Enter breadth: ";
    cin >> b;
}
void height_setter()
{
    cout << "\n Enter height: ";
    cin >> h;
}
// getter for each attribute
void length_getter()
{
    cout << "\n Length is : "<<l;
}
void breadth_getter()
{
    cout << "\n Breadth is : "<<b;
}
void height_getter()
{
    cout << "\n Height : "<<h;
}
// to compute volume
int volume()
{
    return l*b*h;
}

// to print dimensions
void dimensions()
{
  length_getter();
  breadth_getter();
  height_getter();
}
// constructor which will call all setter methods
cal(){
  length_setter();
  breadth_setter();
  height_setter();
}

//overloading >
cal operator>(cal obj)
{
    (volume()>obj.volume()) ? cout <<"\n True" : cout<<"\n False";

}
//overloading <
cal operator<(cal obj)
{
    (volume()<obj.volume()) ? cout <<"\n True" : cout<<"\n False";

}
//overloading >=
cal operator>=(cal obj)
{
    (volume()>=obj.volume()) ? cout <<"\n True" : cout<<"\n False";

}
//overloading <=
cal operator<=(cal obj)
{
    (volume()<=obj.volume()) ? cout <<"\n True" : cout<<"\n False";

}

//overloading ==
cal operator==(cal obj)
{
    (volume()==obj.volume()) ? cout <<"\n True" : cout<<"\n False";

}
};

int main()

{   // Requesting input from user
    cout << "\n Enter Details for Box 1";
    cal obj1;
    cout << "\n Enter Details for Box 2";
    cal obj2;
   // printing entered user
    cout << "\n Attributes Detail Box 1 : ";
    obj1.dimensions();
    cout << "\n Attributes Detail Box 2 : ";
    obj2.dimensions();

    // printing computed volume
    cout << "\n\n Volume of Box 1 is : "<<obj1.volume();
    cout << "\n Volume of Box 2 is : "<<obj2.volume();

    // printing true or false value for logical relation
    cout << "\n\n Is Volume of Box 1 > volume of Box 2 ";
    obj1>obj2;
    cout << "\n Is Volume of Box 1 < volume of Box 2 ";
    obj1<obj2;
    cout << "\n Is Volume of Box 1 >= volume of Box 2 ";
    obj1>=obj2;
    cout << "\n Is Volume of Box 1 <= volume of Box 2 ";
    obj1<=obj2;
    cout << "\n Is Volume of Box 1 == volume of Box 2 ";
    obj1==obj2;



}

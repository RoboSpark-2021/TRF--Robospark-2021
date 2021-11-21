#include<iostream>
using namespace std;

class Rectangle
{
    int length ;
    int breadth ;
public :
    void callarea()
    {
        int area ;
        area = length*breadth;
        printf("\n The area of the rectangle is : %d\n", area);

    }


    Rectangle()
    {
        length =0;
        breadth =0;
        getlengthbreadth();
        callarea();
    }
    Rectangle(int a , int b)
    {
        length = a;
        breadth = b;
        getlengthbreadth();
        callarea();
    }
    Rectangle(int a)
    {
        length = a;
        breadth = a;
        getlengthbreadth();
        callarea();
    }
    void getlengthbreadth()
    {
        printf("\n The length  : %d \n The breadth : %d", length, breadth);
    }
};



int main()
{
    Rectangle s1;
    //s1.callarea();
    Rectangle s2(5,6);
    //s2.callarea();
    Rectangle s3(5);
    //s3.callarea();

}

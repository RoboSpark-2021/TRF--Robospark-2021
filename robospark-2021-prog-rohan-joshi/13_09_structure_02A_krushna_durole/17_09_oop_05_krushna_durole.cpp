#include<iostream>
using namespace std;

class Rectangle
{
    int length ;
    int breadth ;
public :
    void calarea()
    {
        int area ;
        area = length*breadth;
        printf("\n The area of the rectangle is : %d\n", area);

    }


    Rectangle()
    {
        length =0;
        breadth =0;
        gelengthbreadth();
        calarea();
    }
    Rectangle(int a , int b)
    {
        length = a;
        breadth = b;
        gelengthbreadth();
        calarea();
    }
    Rectangle(int a)
    {
        length = a;
        breadth = a;
        gelengthbreadth();
        calarea();
    }
    void gelengthbreadth()
    {
        printf("\n The length  : %d \n The breadth : %d", length, breadth);
    }
};



int main()
{
    Rectangle s1;
    //s1.calarea();
    Rectangle s2(5,6);
    //s2.calarea();
    Rectangle s3(5);
    //s3.calarea();

}
